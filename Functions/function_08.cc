#include<bits/stdc++.h>
using namespace std;

int mul(int a,int b);

int main(){
    int a;
    cout << "Enter the number:";
    cin >> a;

    int b;
    cout << "Enter the number:";
    cin >> b;
    cout << " Multiplication of two numbers: " << mul(a,b);
    return 0;
}

int mul(int a ,int b){
    int c = a * b;
   return c;
}