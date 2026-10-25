#include<bits/stdc++.h>
using namespace std;

int reverse_number();

int main(){
    cout << "Reverse :" << reverse_number();
    return 0;
}

int reverse_number(){
    int n;
    cout << "Enter the number:";
    cin >> n;
    int ld;
    int dup = n;
    int rev = 0;
    while(n != 0){
        ld = n % 10;
        rev = rev * 10 + ld;
        n = n / 10;
    }
    return rev;
}