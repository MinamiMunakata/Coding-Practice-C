/* ************************************ */
/*                                      */
/* vc_iterative_power.c                 */
/*                                      */
/* By: Kenta, Suelen, Minami            */
/*                                      */
/* ************************************ */

#include <stdio.h>

int iterative_power(int n, int power) {
    int i;
    int result = 1;
    if (power < 0) return 0;
    for (i = 0; i < power; i++)
    {
        result *= n;
    } 
    return result;
}
