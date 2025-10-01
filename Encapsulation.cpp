// 1. Encapsulation

// Encapsulation means wrapping data (variables) and functions (methods) into a single unit (class) and restricting direct access to some components.
// 👉 Achieved using access specifiers (private, protected, public).


#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;  // private data (hidden from outside)

public:
    BankAccount(double initialBalance) {
        balance = initialBalance;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient balance!" << endl;
    }

    double getBalance() {   // public getter
        return balance;
    }
};

int main() {
    BankAccount account(1000);  
    account.deposit(500);
    account.withdraw(200);
    cout << "Current Balance: " << account.getBalance() << endl;
    return 0;
}
