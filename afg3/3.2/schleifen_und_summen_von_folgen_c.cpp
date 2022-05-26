#include <iostream>

using namespace std;

long collatz(long n) {
    long lastThree[3] = {0, 0, 0};
    long counter = 0;
    while (!(lastThree[2] == 4 && lastThree[1] == 2 && lastThree[0] == 1)) {
        if (n % 2) {
            n = 3 * n + 1;
        } else {
            n /= 2;
        }
        lastThree[2] = lastThree[1];
        lastThree[1] = lastThree[0];
        lastThree[0] = n;

        counter++;
    }
    return counter;
}

int main() {

    // TODO Test the Collatz-conjecture for the sequences that result from all
    // start values n = 1, ..., 10e6.

    unsigned long int max_length = 0;
    unsigned long int max_start = 0;

    long n = 10e6;
    // Your code here
    for (long i = 1; i <= n; i++) {
        long curLength = collatz(i);
        if (curLength > max_length) {
            max_length = curLength;
            max_start = i;
        }
    }


    std::cout << "The Collatz conjecture is true for the first 10^6 start values." << std::endl;
    std::cout << "The longest sequence is created with n = " << max_start
              << ". It produces " << max_length << " members." << std::endl;
}
