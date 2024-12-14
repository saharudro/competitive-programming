#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is prime
bool isPrime(int x) {
    if (x <= 1) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;

    // Find the next prime after n
    int nextPrime = n + 1;
    while (!isPrime(nextPrime)) {
        nextPrime++;
    }

    // Compare the next prime with m
    if (nextPrime == m) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
