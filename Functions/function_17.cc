#include<bits/stdc++.h>
using namespace std;

void print(int *x,int *y);

int main(){
    int a = 20,b=50;
    print(&a,&b);
    return 0;
}

void print(int *x,int *y){
    int z = *x + *y;
    cout << " Add = " << z;
}