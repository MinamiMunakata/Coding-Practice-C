/* ************************************ */
/*                                      */
/* vc_fibonacci.c                       */
/*                                      */
/* By: Kenta, Suelen, Minami            */
/*                                      */
/* ************************************ */

#include <stdio.h>

int vc_fibonacci(int n) {
    if (n < 0) return -1;
    if (n <= 1) return n;
    return vc_fibonacci(n - 1) + vc_fibonacci(n - 2);
}