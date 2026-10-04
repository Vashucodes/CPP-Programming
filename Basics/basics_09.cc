#include<bits/stdc++.h>

using namespace std;

int main(){
    int temp ;
    int a = 10;
    int b = 20;
    cout << "Before swapping a and b:" << a << "," << b << endl;

    temp = a;
    a = b;
    b = temp;
    cout << "After swapping a and b:" << a << "," << b << endl;

    return 0;
}