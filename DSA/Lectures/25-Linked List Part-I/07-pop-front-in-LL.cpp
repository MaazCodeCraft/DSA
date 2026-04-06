#include <iostream>
using namespace std;

class Node {

  int data;
  Node *next;

public:
  Node(int val) {
    data = val;
    next = NULL;
  }

  ~Node() {
    cout << "~Node " << data << endl;
    if (next != NULL) {
      delete next;
      next = NULL;
    }
  }
  friend class List; // List can access private members
};

class List {
  Node *head;
  Node *tail;

public:
  List() {
    head = NULL;
    tail = NULL;
  }

  ~List() {
    cout << "~List.\n";
    if (head != NULL) {
      delete head;
      head = NULL;
    }
  }

  void push_front(int val) {
    Node *newNode = new Node(val); // dynamic

    if (head == NULL) {
      head = tail = newNode;
    } else {
      newNode->next = head;
      head = newNode;
    }
  }

  void push_back(int val) {
    Node *newNode = new Node(val); // dynamic

    if (head == NULL) {
      head = tail = newNode;
    } else {
      tail->next = newNode;
      tail = newNode;
    }
  }

  void insert(int val, int pos) {
    Node *newNode = new Node(val); // dynamic
    Node *temp = head;

    for (int i = 0; i < pos - 1; i++) {
      if (temp == NULL) {
        cout << "INVALID position.\n";
        return;
      }
      temp = temp->next;
    }

    // temp is now at pos-1 i.e. prev/left
    newNode->next = temp->next; // right connection
    temp->next = newNode;
  }

  void pop_front() {
    if (head == NULL) {
      cout << "Linked List is empty\n";
      return;
    }
    Node *temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
  }

  void printList() {
    Node *temp = head;

    while (temp != NULL) {
      cout << temp->data << "->";
      temp = temp->next;
    }
    cout << "NULL\n";
  }
};

int main() {
  List ll;

  ll.push_front(3);
  ll.push_front(2);
  ll.push_front(1);
  ll.printList(); // List becomes: 1->2->3->NULL

  ll.push_back(4);
  ll.push_back(5);
  ll.push_back(6);
  ll.printList(); // List becomes: 1->2->3->4->5->6->NULL

  ll.insert(100, 2);
  ll.printList(); // List becomes: 1->2->100->3->4->5->6->NULL

  ll.pop_front();
  ll.printList(); // List becomes: 2->100->3->4->5->6->NULL
  return 0;
}