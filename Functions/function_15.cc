#include<bits/stdc++.h>
using namespace std;

bool palindrome_Number(int n);

int main(){
    int n;
    cout << "Enter the number:";
    cin >> n;

    if(palindrome_Number(n)){
        cout << "Given number is palindrome";
    }else{
        cout << "Given number is not palindrome";
    }
    return 0;
}

bool palindrome_Number(int n){
    if (n < 0){
        return false;
    }
    int ld;
    int dup = n;
    int rev = 0;
    while(n != 0){
        ld = n % 10;
        rev = rev * 10 + ld;
        n = n / 10;
    }
    return rev == dup;
    
}