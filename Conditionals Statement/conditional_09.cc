#include<bits/stdc++.h>
using namespace std;

int main(){
    int angle1;
    cout << "Enter teh first angle:";
    cin >> angle1;

    int angle2;
    cout << "Enter teh second angle:";
    cin >> angle2;

    int angle3;
    cout << "Enter teh third angle:";
    cin >> angle3;

    if ((angle1 > 0 && angle2 > 0 && angle3 > 0 && angle1 + angle2 + angle3) == 180){
        cout << "Traingle is valid";
    }else {
        cout << "Traingle is not valid";
    }
    return 0;
}