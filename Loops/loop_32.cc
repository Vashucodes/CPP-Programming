#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int low = 0;
    int high=n-1;
    
    int target;
    cout << "Enter the number :";
    cin >> target;
    while(low<=high){
        int mid = low + (high - low)/2;

        if(arr[mid] == target){
            cout << "Element found at index " << mid;
            return 0;
        }else if(arr[mid] < target){

            low = mid +1;
        }else{
            high = mid - 1;
        }
    }
    
    cout << "Element not found";
   
   
    return 0;
}