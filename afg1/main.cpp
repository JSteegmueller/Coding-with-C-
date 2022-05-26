# include <iostream>
# include <cmath>
using namespace std;

/* Team:
 * all B. Sc. Informatics
 * Bernhard Fraidel 4229942,
 * Lukas Sailer 4265663,
 * Julian Zürn 4267441,
 * Nicolas Hämmerle 4178844,
 * Pavel Hegler 3920831,
 * Janik Steegmüller 4235318
 */

/*
 * 1.1
 * a) error:
 *      expected initializer before ‘cout’
 *    also causes:
 *      ‘someNumber’ was not declared in this scope
 *
 * b) error:
 *      missing terminating " character
 *    also causes:
 *      no match for ‘operator<<’
 *
 * c) error:
 *      ‘cout’ was not declared in this scope; did you mean ‘std::cout’?
 *    also causes:
 *      ‘cin’ was not declared in this scope; did you mean ‘std::cin’
 *
 * d) error:
 *      uninitialized ‘const someNumber’
 *    also causes:
 *      no match for ‘operator>>’
 *
 *
 * e) fatal error:
 *      iostream.h: No such file or directory
 *
 */


/*
 * 1.2
 *
 * l = i;      OK
 * i = l + 90; Risky since the long(8 byte) may be greater than allowed by integer(4 byte), l may not be fully mapped onto i
 * d = f;      OK
 * f = s;      OK
 * b = d;      Risky because char has 1 byte and double has 8 bytes, also the conversion discards decimal places.
 * a = i;      Risky because char has 1 byte and integer has 4 bytes.
 * i = d;      Risky since the double(8 byte) may be greater than allowed by integer(4 byte), d may not be fully mapped onto i (decimal places are discarded)
 */


/*
 * 1.3
 */
struct MidnightResult {
    double x1;
    double x2;
};

MidnightResult midnight(double a, double b, double c) {
    if(a == 0) throw invalid_argument( "a can not be zero" );

    MidnightResult res{};
    double discriminant = sqrt(b * b - (4 * a * c));

    if (isnan(discriminant)) throw invalid_argument("discriminant is negative" );

    res.x1 = (-b + discriminant) / (2 * a);
    res.x2 = (-b - discriminant) / (2 * a);
    return res;
}

int main() {
    try {
        double a,b,c;
        cout << " Enter a : " ;
        cin >> a;
        cout << " Enter b : " ;
        cin >> b;
        cout << " Enter c : " ;
        cin >> c;
        MidnightResult result = midnight(a,b,c);
        printf("x1: %f, x2: %f", result.x1, result.x2);
    } catch (const invalid_argument& e) {
        cout << e.what() ;
        return 1;
    }
    return 0;
}
/*
 *
 */

/*
 * 1.4
 *
 * ggT(65, 25)
 * 65 > 25 ==> ggT(40, 25)
 * 40 > 25 ==> ggT(15, 25)
 * 15 < 25 ==> ggT(15, 10)
 * 15 > 10 ==> ggT(5, 10)
 *  5 < 10 ==> ggT(5, 5)
 *  5 == 5 ==> result = 5
 */