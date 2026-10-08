#include<bits/stdc++.h>
using namespace std;

int main(){

    int day;

    cout << "Enter day number (1-7): ";
    cin >> day;

    switch(day){

        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Weekday";
            break;

        case 6:
        case 7:
            cout << "Weekend";
            break;

        default:
            cout << "Invalid day";
    }

    return 0;
}