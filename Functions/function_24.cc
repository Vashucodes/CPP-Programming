#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        if(arr[i+1] <= arr[i])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    if(isSorted(arr, n))
    {
        cout << "Array is sorted";
    }
    else
    {
        cout << "Array is not sorted";
    }

    return 0;
}