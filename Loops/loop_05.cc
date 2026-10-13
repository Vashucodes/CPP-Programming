#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0, b;

    while (n != 0)
    {
        b = n % 10;
        sum += b;
        n = n / 10;
    }
    cout << "Sum of digits  =" << sum;
    return 0;
}