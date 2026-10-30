#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {67,45,23,12,35,49};
    int n = sizeof(arr)/sizeof(arr[0]);

    int largest = arr[0];
    for(int i = 0;i<n;i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    cout << "Largest element of array :" << largest;
    return 0;
}