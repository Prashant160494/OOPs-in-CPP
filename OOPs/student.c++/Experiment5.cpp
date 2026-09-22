#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    long long accountNumber;
    double balance;

public:
    BankAccount(string name, long long accNum, double initialBalance) {
        accountHolder = name;
        accountNumber = accNum;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }

    void display() {
        cout << "\n--- Account Details ---" << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount myAccount("Rahul Sharma", 123456789, 5000.0);

    myAccount.display();

    myAccount.deposit(1500.0);
    myAccount.withdraw(2000.0);

    myAccount.display();

    return 0;
}