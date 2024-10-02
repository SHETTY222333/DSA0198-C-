#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolderName;
    int accountNumber;
    double balance;

public:
    BankAccount(string name, int number, double initialBalance) {
        accountHolderName = name;
        accountNumber = number;
        balance = initialBalance; 
        cout << "Account created for " << accountHolderName << " with account number: " << accountNumber << endl;
    }
~BankAccount() {
        cout << "Account for " << accountHolderName << " with account number " << accountNumber << " is closed." << endl;
}
    void displayAccountDetails() {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount account1("John Doe", 123456, 1000.50);
    account1.displayAccountDetails();
    return 0;
}
