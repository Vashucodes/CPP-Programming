#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0, b;
    int cpy = n;

    while (n != 0)
    {
        b = n % 10;
        sum = sum + (b * b * b);
        n = n / 10;
    }
    if (cpy == sum)
    {
        cout << "Given number is Armstrong";
    }
    else
    {
        cout << "Given number is not Armstrong";
    }

    return 0;
}