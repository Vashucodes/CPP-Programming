#include<bits/stdc++.h>
using namespace std;

int main(){
    double rad ;
    cout << "Enter the radius:";
    cin >> rad;

    const double pi = 3.14;
    double area = pi * rad * rad ;
    
    cout << "Area of circle :" << area;
    return 0;
}