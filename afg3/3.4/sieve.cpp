//
// Created by jsteeg on 4/13/21.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Enter natural number: ";
    int n;
    cin >> n;
    cout << "n = " << n << endl;


    // initialize array of length n for marks
    int marks[n + 1];
    for (int i = 2; i <= n; i++) {
        marks[i] = 1;
    }


    for (int k = 2; k <= sqrt(n); k++) {
        int i = 2;
        int multiple = i * k;
        while (multiple <= n) {
            marks[multiple] = 0;
            i++;
            multiple = k * i;
        }
    }
    int numPrimes = 0;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (marks[i] == 1) {
            sum += i;
            numPrimes++;
        }

    }
    cout << "sum of Primes: " << sum << " Number of Primes: " << numPrimes << endl;
}
