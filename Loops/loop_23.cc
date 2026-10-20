
#include <bits/stdc++.h>
using namespace std;

int main() {
    int no1, no2;

    cout << "Enter first number: ";
    cin >> no1;

    cout << "Enter second number: ";
    cin >> no2;

    int m = 1;
    int limit = min(no1, no2);

    for (int i = 1; i <= limit; i++) {
        if (no1 % i == 0 && no2 % i == 0) {
            m = i;
        }
    }

    cout << "HCF of " << no1 << " and " << no2 << " is " << m;

    return 0;
}
