#include <iostream>
using namespace std;

// Create a User class with properties: id (private), username (public) &
// password (private). Its id should be initialized in a parameterised
// constructor. It should have a Getter & Setter for password and id.

class User {
  int id;
  string password;

public:
  string username;

  User(string username, int userId, string pass) {
    this->username = username;
    setId(userId);
    setPass(pass);
  }

  void setId(int id) {
    if (to_string(id).length() < 5) {
      cout << "Id must be 5 charcter long.\n";
      this->id = -1; // fallback value
    } else {
      this->id = id;
    }
  }

  void setPass(string password) {
    if (password.length() < 8) {
      cout << "Password must be at least 8 charcter long.\n";
      this->password = ""; // fallback value
    } else {
      this->password = password;
    }
  }

  string getPassword() { return password; }
  int getId() { return id; }

  void printDetails() {
    cout << "Username : " << username << endl;
    cout << "User Id : " << getId() << endl;
    cout << "Password : " << getPassword() << endl;
  }
};

int main() {
  User u1("algonix", 54321, "pass12345");
  u1.printDetails();

  User u2("al", 5431, "pas245"); // invalid id and password
  u2.printDetails();
  return 0;
}