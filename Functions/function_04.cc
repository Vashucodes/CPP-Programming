#include<bits/stdc++.h>
using namespace std;

bool iseven(int n);

int main(){
    int a;
    cout << "Enter the number:";
    cin >> a;

    cout << iseven(a);
    return 0;
}
bool iseven(int n){
    if ( n % 2 == 0){
        return true;
    }else{
        return false;
    }
}