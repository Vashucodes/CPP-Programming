#include<bits/stdc++.h>
using namespace std;

int main(){

    float per;

    cout << "Enter your percentage: ";
    cin >> per;

    if(per < 0 || per > 100){
        cout << "Invalid percentage";
    }
    else if(per >= 60){
        cout << "First Division";
    }
    else if(per >= 45){
        cout << "Second Division";
    }
    else if(per >= 33){
        cout << "Third Division";
    }
    else{
        cout << "Fail";
    }

    return 0;
}