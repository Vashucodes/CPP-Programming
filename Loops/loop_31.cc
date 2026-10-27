#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target;
    cout << "Enter the number :";
    cin >> target;
    int m = 0;
    
    for(int i = 0;i<n;i++){
        if(target == arr[i]){
            cout << "Element is found";
            m = 1;
            break;
        }
    }
    if(m==0){
        cout << "Not found";
    }
    return 0;
}