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

  return 0;
}