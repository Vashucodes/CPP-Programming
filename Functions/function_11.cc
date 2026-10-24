#include <bits/stdc++.h>
using namespace std;

int prime(int n);

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "Total prime numbers from 2 to " << n
         << " are " << prime(n);

    return 0;
}

int prime(int n) {
    int countprime = 0;

    for (int num = 2; num <= n; num++) {
        bool isPrime = true;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            countprime++;
        }
    }

    return countprime;
}
