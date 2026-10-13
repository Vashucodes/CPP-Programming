
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int fact = 1;
    int i = n;

    while (i > 0) {
        fact *= i;
        i--;
    }

    cout << "Factorial: " << fact;

    return 0;
}
