#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    int mul = 1,b;
    while(n!=0){
        b = n % 10;
        mul = mul  * b;
        n = n / 10;
    }
    cout << "Multiplication of digits :" << mul;
    return 0;
}