#include<bits/stdc++.h>
using namespace  std;

int main(){
    int year ;
    cout << "Enter your birth year:";
    cin >> year;

    if ( year % 400 == 0 || (year % 4 == 0 && year % 100 !=0)){
        cout << "it is a leap year";
    } else {
        cout << "it is  not a leap year";
    }
    return 0;
}