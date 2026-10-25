#include<bits/stdc++.h>
using namespace std;

long long factorial(int n);

int main(){
    int n;
    cout << "Enter the number:";
    cin >> n;
    if( n < 0) {
        cout << "Factorial of negative number does'nt exist";
    }else {
        cout << "Factorial=" << factorial(n);
    }

    return 0;
}

long long factorial(int n){
    long long fact = 1;
    for(int i =1;i<=n;i++){
        fact *= i;
    }
    
    return fact;
}