#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int rev = 0 ,  b;

    while(n != 0){
        b =  n % 10;
        rev = rev * 10 + b;
        n = n / 10;

    }
    cout << "Reverse number =" << rev;
    return 0;
}