#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    int count = 0;

    if (n <= 1){
        cout << "Number is not prime";
        return 0;
    }

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << "Number is prime";
    }
    else
    {
        cout << "Number is not prime";
    }

    return 0;
}
