#include<bits/stdc++.h>

using namespace std;

int main(){
    double p ;
    cout << "Enter the principle rate:";
    cin >> p;

    double r ;
    cout << "Enter the rate:";
    cin >> r;

    double t ;
    cout << "Enter the time:";
    cin >> t;


    double simple_interest = (p*r*t) /100 ;
    
    cout << "Simple Interest:" << simple_interest;
    return 0;
}