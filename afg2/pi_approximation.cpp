#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double pi = 3.141592;

    /*
    a)
    */
    {
        /* Calculate here */
        long limit;
        cout << " Enter limit : " ;
        cin >> limit;
        if (limit < 0) return 1;

        double lim = 0;

        for(int k = 1; k <= limit; k++) {
            lim += 1./(k*k);
        }

        double piApprox = sqrt(6*lim); /* Save the result in this variable */
        cout << "Pi is approximately: " << piApprox << endl;
        cout << "The difference is: " << pi - piApprox << endl;
    }

    /*
    b)
    */
    {
        double piApprox = 0; /* Save the result in this variable */
        double epsilon = 0.0001;
        int i = 0; /* Write the amount of iterations needed in this variable */
        double lim = 0;

        /* Calculate here */
        while (pi - piApprox > epsilon) {
            i++;
            lim += 1. / (i * i);
            piApprox = sqrt(6*lim);
        }

        cout << "It takes " << i << " iterations to approximate Pi to: " << piApprox << endl;
        cout << "The difference is: " << pi - piApprox << " < " << epsilon << endl;
    }

    /*
     * c)
     * Epsilon is too small, making the approximation take too many iterations.
     * This causes i * i to become 0 eventually (due to an overflow).
     * We then divide with 0 causing lim and piApprox to become inf.
     * pi - piApprox then becomes -inf.
     *
     *
     */
}
