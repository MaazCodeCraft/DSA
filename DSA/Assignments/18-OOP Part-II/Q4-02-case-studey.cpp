// Case Study 2: Inventory Management System
// Problem:
// Design a C++ program to manage inventory in a warehouse. Implement the
// following classes: • A class "Item" with data members for item ID, name,
// quantity, and price. • A class "Warehouse" that manages a collection of items
// and provides functions to add a new item, update item quantity, and display
// all items. The program should manage the inventory, allowing for adding new
// items, updating quantities, and displaying the list of items.
#include <iostream>
using namespace std;

class Item {
protected:
  int itemID;
  string name;
  int quantity;
  double price;

public:
  Item() : itemID(0), name(""), quantity(0), price(0.0) {}
  Item(int id, string n, int q, double p)
      : itemID(id), name(n), quantity(q), price(p) {}

  int getItemID() { return itemID; }
  void updateQuantity(int q) { quantity = q; }
  void display() {
    cout << "Item ID: " << itemID << ", Name: " << name
         << ", Quantity : " << quantity << ", Price : " << price << endl;
  }
};

class Warehouse : public Item {
  Item items[10];
  int itemCount;

public:
  Warehouse() : itemCount(0) {}
  void addItem(Item item) {
    if (itemCount < 10) {
      items[itemCount++] = item;
    } else {
      cout << "Warehouse is full. Cannot add more items." << endl;
    }
  }

  void updateItemQuantity(int id, int quantity) {
    for (int i = 0; i < itemCount; i++) {
      if (items[i].getItemID() == id) {
        items[i].updateQuantity(quantity);
        break;
      }
    }
  }
  void displayItems() {
    for (int i = 0; i < itemCount; i++) {
      items[i].display();
    }
  }
};

int main() {
  Warehouse warehouse;
  warehouse.addItem(Item(1, "Laptop", 10, 999.99));
  warehouse.addItem(Item(2, "Mouse", 50, 19.99));
  warehouse.addItem(Item(3, "Keyboard", 30, 49.99));
  warehouse.addItem(Item(4, "Monitor", 20, 199.99));
  warehouse.addItem(Item(5, "Printer", 15, 299.99));
  warehouse.addItem(Item(6, "Scanner", 25, 99.99));
  warehouse.addItem(Item(7, "Router", 40, 49.99));
  warehouse.addItem(Item(8, "Modem", 35, 39.99));
  warehouse.addItem(Item(9, "Headphones", 45, 29.99));
  warehouse.addItem(Item(10, "Webcam", 10, 89.99));

  cout << "Initial Inventory:" << endl;
  warehouse.displayItems();

  warehouse.updateItemQuantity(1, 8);
  cout << "Updated Inventory:" << endl;
  warehouse.displayItems();
  return 0;
}