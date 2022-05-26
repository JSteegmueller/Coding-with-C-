#include<stdio.h>

unsigned long endless(unsigned long n) {
	printf("n = %lu\n", n);
	return endless(n+1);
}

// The function computes the digit sum (Quersumme).
unsigned long recursive(unsigned long n) {
    if (n < 10) {
        return n;
    }
    return n % 10 + recursive(n / 10);
}

unsigned long iterative(unsigned long n) {
    int sum = 0;
    while(n >= 10) {
        sum += n % 10;
        n /= 10;
    }
    sum += n;
    return sum;
}


int main(void)
{
	unsigned long x = iterative(1800);
	unsigned long y = recursive(1800);
	printf("Recursion terminated successfully, result is: x = %lu\n", y);
	printf("Iteration terminated successfully, result is: x = %lu\n", x);
    return 0;
}

/*
 * a)
 * i) If the depth of recursion were not constrained the loop would result in the program trying to write to memory that might be used by other programs.
 *    Line 11 will never be reached because endless will not be exited.
 * ii) 261914
 * iii) The new result is 8057
 *      this is because we allocate an array of 1000 chars in every iteration resulting in  the stack overflow being reached faster.
 * iv) The new result is 261963. The result is changing every run because it depends on what's already written on the stack before the run.
 *
 *
 *            __ __
            ,;::\::\
          ,'/' `/'`/
      _\,: '.,-'.-':.
     -./"'  :    :  :\/,
      ::.  ,:____;__; :-
      :"  ( .`-*'o*',);
       \.. ` `---'`' /
        `:._..-   _.'
        ,;  .     `.
       /"'| |       \
      ::. ) :        :
      |" (   \       |
      :.(_,  :       ;
       \'`-'_/      /
        `...   , _,'
         |,|  : |
         |`|  | |
         |,|  | |
     ,--.;`|  | '..--.
    /;' "' ;  '..--. ))
    \:.___(___   ) ))'

 */
