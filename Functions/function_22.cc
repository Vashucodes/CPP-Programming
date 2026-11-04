#include<bits/stdc++.h>
using namespace std;

void ssmallestArray(int arr[],int n){
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    for(int i = 0;i<n;i++){
       if(arr[i] < smallest){
        ssmallest = smallest;
        smallest = arr[i];
       }else if( arr[i] != smallest && arr[i] < ssmallest){
        ssmallest = arr[i];

       }
    }
    cout << " Second  smallest element in array " << ssmallest;
}

int main(){
    int arr[6] = {12, 45, 7, 89, 34, 21};
    int n = sizeof(arr)/sizeof(arr[0]);

    ssmallestArray(arr,n);   
    return 0;
}