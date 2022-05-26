#include <iostream>
#include <cmath>

int main() {

    float result = 0;
    long n = 10e6;

    // TODO: Compute the Leibniz Formula
    for (int k = 0; k <= n; k++) {
        result += powf(-1, (float) k) / (float) ((2. * k) + 1.);
    }

    // Output for the results
    std::cout << "Das Ergebniss der Reihe ist: " << result << std::endl;
    std::cout << "PI/4 ist: " << M_PI / 4.f << std::endl;
}
