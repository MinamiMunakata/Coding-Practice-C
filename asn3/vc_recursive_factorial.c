/* ************************************ */
/*                                      */
/* vc_recursive_factorial.c             */
/*                                      */
/* By: Kenta, Suelen, Minami            */
/*                                      */
/* ************************************ */

#include <stdio.h>

int recursive_factorial(int n) {
    if (n == 1) return 1;
    if (n <= 0) return 0;
    return n * recursive_factorial(n -1);
}