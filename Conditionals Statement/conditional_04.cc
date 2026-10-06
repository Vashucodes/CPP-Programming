#include<bits/stdc++.h>
using namespace std;

int main(){
    int age ;
    cout << "Enter your age:";
    cin >> age;

    if (age <0 ){
        cout << "please enter a valid age";
    }else if(age >= 18){
        cout << "You are eligible for voting";
    }else{
        cout << "You are not eligible for voting";
    }
    return 0;
}