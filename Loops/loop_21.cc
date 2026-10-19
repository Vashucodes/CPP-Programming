#include<bits/stdc++.h>
using namespace std;

int main(){
    int base,f = 1;
    cout << "Enter the Base";
    cin >> base;

    int power ;
    cout << "Enter the power";
    cin >> power;

    for (int i=1;i<=power;i++){
        f = f*base;
    }

    cout << "Result:" << f;
    return 0;
}