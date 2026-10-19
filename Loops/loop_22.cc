#include<bits/stdc++.h>
using namespace std;

int main(){
    int no1;
    cout << "Enter first number:";
    cin>> no1;

    int no2;
    cout << "Enter second number:";
    cin >> no2;

    int m = 1;
    for(int i=no1;;i++){
        if(i % no1 == 0 && i % no2 == 0){
            m= i;
            break;
        }
    }

    cout << "LCM of " << no1 << " and " << no2 << " is " << m;
    return 0;
}