#include<bits/stdc++.h>
using namespace std;

void print(int i ,int n){
    if(i > n) return;
    cout << "Hello";
    print(i+1,n);
}

int main(){
    int n;
    cout << "Enter the number:";
    cin >> n;
    print(0,n);
    return 0;
}