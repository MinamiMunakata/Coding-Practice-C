/* ************************************ */
/*                                      */
/* vc_iterative_factorial.c             */
/*                                      */
/* By: Kenta, Suelen, Minami            */
/*                                      */
/* ************************************ */

#include <stdio.h>

int iterative_factorial(int n) {
    int i;
    if (n < 0) return 0;
    for(i = n - 1; i > 0; i--)
    {
        n *= i;
    }
    return n;
}

