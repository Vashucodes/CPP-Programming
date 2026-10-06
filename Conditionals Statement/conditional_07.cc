#include<bits/stdc++.h>
using namespace std;


int main(){

    char ch;

    cout << "Enter the alphabet: ";
    cin >> ch;

    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){

        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){

            cout << "Vowel";

        }else{

            cout << "Consonant";
        }

    }else{

        cout << "Please enter an alphabet";
    }

    return 0;
}