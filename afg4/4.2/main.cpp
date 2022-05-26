/* The termination criterion before the recursive function call is missing
*  One possible termination criterion would be if n==0 return 0;
*  The criterion should be put before the recursive call.
 */
double functionA(int n) {
    int m = n + 12;
    m += functionA(n - 1) * 0.5;
    return m;
}

/*
 * The program only terminates when it is called with n=0, otherwise there will be an infinite loop resulting in a stack overflow.
 * n is never changed therefore the condition is never met.
 * You should probably change n (like `return functionB(n + 2)`) and make the condition if (n >= something).
 */
double functionB(int n) {
    if (n == 0)
        return 42;
    return 2 + functionB(n);
}

/*
 * Won't terminate (unless called with 0) because of the equal comparator (since every recursion consists of an even and an odd functionC-call)
 * Fix: use <= for the comparison
 */
double functionC(int n) {
    if (n == 0)
        return 0;
    return functionC(n - 1) + functionC(n - 2) + functionC(n - 1);
}

int main() {
    functionC(10048);
}

