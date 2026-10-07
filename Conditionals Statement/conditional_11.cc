#include<bits/stdc++.h>
using namespace std;

int main(){

    double a, b;
    char op;

    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter the second number: ";
    cin >> b;

    switch(op){

        case '+':
            cout << "Addition: " << a + b;
            break;

        case '-':
            cout << "Subtraction: " << a - b;
            break;

        case '*':
            cout << "Multiplication: " << a * b;
            break;

        case '/':
            if(b != 0){
                cout << "Division: " << a / b;
            }
            else{
                cout << "Cannot divide by zero";
            }
            break;

        default:
            cout << "Invalid operator";
    }

    return 0;
}