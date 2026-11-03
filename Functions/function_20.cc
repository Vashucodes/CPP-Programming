#include<bits/stdc++.h>
using namespace std;

void largestArray(int arr[],int n){
    int largest = arr[0];
    for(int i = 0;i<n;i++){
       if(arr[i] > largest){
        largest = arr[i];
       }
    }
    cout << " Largest element in array " << largest;
}

int main(){
    int arr[6] = {12, 45, 7, 89, 34, 21};
    int n = sizeof(arr)/sizeof(arr[0]);

    largestArray(arr,n);   
    return 0;
}