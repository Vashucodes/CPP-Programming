#include<bits/stdc++.h>
using namespace std;

void sub(int a,int b);

int main(){
    int a;
    cout << "Enter the number:";
    cin >> a;

    int b;
    cout << "Enter the number:";
    cin >> b;
    sub(a,b);
    return 0;
}

void sub(int a ,int b){
    int c = a - b;
    cout << "Subtraction of two number:" << c;
}