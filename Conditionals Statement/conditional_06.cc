#include<bits/stdc++.h>
using namespace std;

int main(){
    char ch ;
    cout << "Enter the alphabet :";
    cin >> ch;
    if ( ch >= 'A'  && ch <= 'Z'){
        cout << "Alphabet is uppercase";
    }else if( ch >='a' && ch <='z'){
        cout << "Alphabet is lowercase";
    }else {
        cout << "please enter an alphabet";
    }
    return 0;
}