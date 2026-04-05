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
};

int main() {
  List ll;

  ll.push_front(3);
  ll.push_front(2);
  ll.push_front(1);
  // List becomes: 1 -> 2 -> 3 -> NULL

  return 0;
}