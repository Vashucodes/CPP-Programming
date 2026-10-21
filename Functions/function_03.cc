#include<bits/stdc++.h>
using namespace std;

int maximum(int a,int b);

int main(){
    int a;
    cout << "Enter the number:";
    cin >> a;

    int b;
    cout << "Enter the number:";
    cin >> b;

    cout << " Maximum= " << maximum(a,b);

    return 0;
}

int maximum(int a,int b){
    if (a > b){
        return a;
    }else{
        return b;
    }
}