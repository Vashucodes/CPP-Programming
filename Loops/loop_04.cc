#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int rev = 0 ,  b;
    int cpy = n;

    while(n != 0){
        b =  n % 10;
        rev = rev * 10 + b;
        n = n / 10;

    }
    if ( cpy == rev){
        cout << "Given number is palindrome";
    }else{
        cout << "Given number is not palindrome";
    }
    
    return 0;
}