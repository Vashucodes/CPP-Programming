#include<bits/stdc++.h>
using namespace std;

int main(){

    float p;

    cout << "Enter your percentage: ";
    cin >> p;

    if(p < 0 || p > 100){
        cout << "Invalid percentage";
    }
    else if(p >= 60){
        cout << "First Division";
    }
    else if(p >= 45){
        cout << "Second Division";
    }
    else if(p >= 33){
        cout << "Third Division";
    }
    else{
        cout << "Fail";
    }

    return 0;
}
