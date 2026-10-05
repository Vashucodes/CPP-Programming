#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cout<<"Enter the first number";
    cin >> a;

    int b;
    cout << "Enter the second number:";
    cin >> b;
    if (a > b){
        cout << a << "is greater than " << b;
    }else if (b>a){
        cout << b << "is greater than " << a;
    }else{
        cout << "Both number are equal";
    }
    return 0;
}