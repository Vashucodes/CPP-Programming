#include <bits/stdc++.h>
using namespace std;

int divide();

int main() {
    cout << "Division of two numbers: " << divide();
    return 0;
}

int divide() {
    int a, b;

    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    if (b == 0) {
        cout << "Cannot divide by zero.";
        return 0;
    }

    return a / b;
}
