#include<bits/stdc++.h>
using namespace std;

void sum(int a ,int b); // Function declaration

int main(){
    int a;
    cout << "Enter the number:";
    cin >> a;

    int b;
    cout << "Enter the number:";
    cin >> b;
    sum(a,b);  // Function call
    return 0;;
}

void sum(int a,int b){  // Function definition
    cout << " Sum= " << a + b;
}