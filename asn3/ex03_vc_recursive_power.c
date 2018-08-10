/* ************************************ */
/*                                      */
/* vc_recursive_power.c                 */
/*                                      */
/* By: Kenta, Suelen, Minami            */
/*                                      */
/* ************************************ */

#include <stdio.h>

int vc_recursive_power(int n, int power) {
    if (power < 0) return 0;
    if (power == 0) return 1;
    return n * vc_recursive_power(n, power -1);
}

