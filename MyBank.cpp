
#include <iostream>
#include <string>
#include <limits>
using namespace std;

class BankAccount {

private:
    int accountNumber;
    string accountHolder;
    double balance;
    bool accountCreated;

public:

    // Constructor
    BankAccount() {
        accountNumber = 0;
        accountHolder = "";
        balance = 0.0;
        accountCreated = false;
    }

    // Create Account
    void createAccount() {

        if (accountCreated) {
            cout << "\nAccount already exists!\n";
            return;
        }

        cout << "\nEnter Account Number: ";
        cin >> accountNumber;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Enter Account Holder Name: ";
        getline(cin, accountHolder);

        cout << "Enter Initial Deposit: ";
        cin >> balance;

        if (balance < 0) {
            cout << "Invalid deposit amount!\n";
            accountNumber = 0;
            accountHolder = "";
            balance = 0;
            return;
        }

        accountCreated = true;

        cout << "\nAccount Created Successfully!\n";
    }

    // Retrieve Account Details
    void retrieveDetails() {

        if (!accountCreated) {
            cout << "\nNo Account Found!\n";
            return;
        }

        cout << "\n------ ACCOUNT DETAILS ------\n";
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: Rs. " << balance << endl;
    }

    // Deposit Money
    void depositMoney() {

        if (!accountCreated) {
            cout << "\nPlease Create an Account First!\n";
            return;
        }

        double amount;

        cout << "\nEnter Deposit Amount: ";
        cin >> amount;

        if (amount <= 0) {
            cout << "Invalid Amount!\n";
            return;
        }

        balance += amount;

        cout << "Amount Deposited Successfully!\n";
        cout << "Updated Balance: Rs. " << balance << endl;
    }

    // Withdraw Money
    void withdrawMoney() {

        if (!accountCreated) {
            cout << "\nPlease Create an Account First!\n";
            return;
        }

        double amount;

        cout << "\nEnter Withdrawal Amount: ";
        cin >> amount;

        if (amount <= 0) {
            cout << "Invalid Amount!\n";
            return;
        }

        if (amount > balance) {
            cout << "Insufficient Balance!\n";
            return;
        }

        balance -= amount;

        cout << "Withdrawal Successful!\n";
        cout << "Remaining Balance: Rs. " << balance << endl;
    }

    // Check Balance
    void checkBalance() {

        if (!accountCreated) {
            cout << "\nPlease Create an Account First!\n";
            return;
        }

        cout << "\nCurrent Balance: Rs. " << balance << endl;
    }

};


int main() {

    BankAccount account;

    int choice;

    do {

        cout << "\n================================\n";
        cout << "       BANK MANAGEMENT SYSTEM   \n";
        cout << "================================\n";

        cout << "1. Create Account\n";
        cout << "2. Retrieve Account Details\n";
        cout << "3. Deposit Money\n";
        cout << "4. Withdraw Money\n";
        cout << "5. Check Balance\n";
        cout << "6. Exit\n";

        cout << "================================\n";
        cout << "Enter Your Choice: ";

        if (!(cin >> choice)) {
            cout << "\nInvalid Input! Please enter a number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        switch (choice) {

            case 1:
                account.createAccount();
                break;

            case 2:
                account.retrieveDetails();
                break;

            case 3:
                account.depositMoney();
                break;

            case 4:
                account.withdrawMoney();
                break;

            case 5:
                account.checkBalance();
                break;

            case 6:
                cout << "\nThank You for Using Our Banking System!\n";
                break;

            default:
                cout << "\nInvalid Choice! Please Try Again.\n";
        }

    } while (choice != 6);

    return 0;
}
