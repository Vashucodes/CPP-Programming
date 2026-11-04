#include<bits/stdc++.h>
using namespace std;

void slargestArray(int arr[],int n){
    int largest = arr[0];
    int slargest = -1;
    for(int i = 0;i<n;i++){
       if(arr[i] > largest){
        slargest = largest;
        largest = arr[i];
       }else if( arr[i] != largest && arr[i] > slargest){
        slargest = arr[i];
       }
    }
    cout << " Second  Largest element in array " << slargest;
}

int main(){
    int arr[6] = {12, 45, 7, 89, 34, 21};
    int n = sizeof(arr)/sizeof(arr[0]);

    slargestArray(arr,n);   
    return 0;
}