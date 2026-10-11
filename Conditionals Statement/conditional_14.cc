#include <bits/stdc++.h>
using namespace std;

int main() {
    double amount;
    cout << "Enter the amount: ";
    cin >> amount;

    double credit_Amount, debit_Amount;

    cout << "Enter c for credit amount and d for debit amount: ";
    char ch;
    cin >> ch;

    switch (ch) {
        case 'c':
            cout << "Enter the credit amount: ";
            cin >> credit_Amount;

            amount = amount + credit_Amount;
            cout << "New amount: " << amount;
            break;

        case 'd':
            cout << "Enter the debit amount: ";
            cin >> debit_Amount;

            if (amount >= debit_Amount) {
                amount = amount - debit_Amount;
                cout << "New amount: " << amount;
            } else {
                cout << "Insufficient balance!";
            }
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}
