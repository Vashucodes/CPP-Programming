#include<bits/stdc++.h>
using namespace std;

int main(){
    int sum = 0;
    int arr[2][2] = {{1,2},
                    {3,4}};
    cout << "Elements of array given below:" << endl;
    for(int i = 0;i<2;i++){
        for(int j = 0;j<2;j++){
            cout << arr[i][j] << " ";
            sum = sum + arr[i][j];
        }
        cout << endl;
    }
    cout << "Total Sum=" << sum;
    return 0;
}