#include<bits/stdc++.h>
using namespace std;

int main(){
    char ch;
    cout << "Enter the alphabet:";
    cin >> ch;

    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        cout << "Vowel";
        break;
        default:
        cout << "Consonant";
        break;
    }
    return 0;
}