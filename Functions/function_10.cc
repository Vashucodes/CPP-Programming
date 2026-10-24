#include <bits/stdc++.h>
using namespace std;

bool prime(int n);

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if (prime(n)) {
        cout << "Number is prime";
    } else {
        cout << "Number is not prime";
    }

    return 0;
}

bool prime(int n) {
    if (n <= 1) {
        return false;
    }

    int count = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }

    return count == 2;
}
