#include <iostream>
#include <string>
using namespace std;

class BankAccount {
  string accountNumber;
  double balance = 0;

public:
  BankAccount(string accNo, double bal) {
    setAccountNumber(accNo);
    if (bal <= 0) {
      throw invalid_argument("Initial balance cannot be negative.");
      return;
    } else {
      deposit(bal);
      cout << "Account created successfully!\n";
    }
  }

  void setAccountNumber(string acc) {
    if (acc.length() < 10) {
      throw invalid_argument(
          "Invalid Account Number! Must be at least 10 digits.");
      return;
    } else {
      accountNumber = acc;
    }
  }

  void deposit(double amount) {
    if (amount <= 0) {
      cout << "Balance cannot be negative.\n";
      return;
    } else {
      balance += amount;
      cout << "Successfully Deposited: " << amount << endl;
    }
  }

  void withdraw(double amount) {
    if (amount > balance) {
      cout << "Insufficient balance for this withdrawal.\n";
      return;
    } else {
      balance -= amount;
      cout << "Successfully Withdrawn: " << amount << endl;
    }
  }
  double getBalance() { return balance; }

  void displayDetails() const {
    cout << "\n======= Account Details =======\n";
    cout << "Account No : " << accountNumber << endl;
    cout << "Balance    : " << balance << endl;
    cout << "===============================\n";
  }
};

int main() {
  string accNum;
  double initialBal;

  try {
    cout << "Enter Account Number: ";
    getline(cin, accNum);
    cout << "Enter Initial Balance: ";
    cin >> initialBal;
    BankAccount user(accNum, initialBal);

    int choice;
    double amount;
    do {
      cout << "\n===== Banking Menu =====\n";
      cout << "1. Deposit Money\n";
      cout << "2. Withdraw Money\n";
      cout << "3. Check Account Details\n";
      cout << "4. Exit\n";
      cout << "Enter Choice: ";
      cin >> choice;
      switch (choice) {
      case 1:
        cout << "Enter Deposit Amount: ";
        cin >> amount;
        user.deposit(amount);
        break;

      case 2:
        cout << "Enter Withdraw Amount: ";
        cin >> amount;
        user.withdraw(amount);
        break;

      case 3:
        user.displayDetails();
        break;

      case 4:
        cout << "Exiting... Thank you!\n";
        break;

      default:
        cout << "Invalid Option!\n";
      }
    } while (choice != 4);
  } catch (exception &e) {
    cout << e.what() << endl;
    cout << "Program terminated due to invalid input.\n";
    return 1; // exit program with error
  }
  return 0;
}