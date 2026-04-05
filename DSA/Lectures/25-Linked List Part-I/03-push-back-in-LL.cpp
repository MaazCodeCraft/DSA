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

  void push_back(int val) {
    Node *newNode = new Node(val); // dynamic

    if (head == NULL) {
      head = tail = newNode;
    } else {
      newNode->next = tail;
      tail = newNode;
    }
  }
};

int main() {
  List ll;

  ll.push_back(1);
  ll.push_back(2);
  ll.push_back(3);
  // List becomes: 1 -> 2 -> 3 -> NULL

  return 0;
}