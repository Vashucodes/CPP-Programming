#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
    
}

int main()
{
    int arr[6] = {12, 45, 7, 89, 34, 21};
    int n = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, n);
    return 0;
}