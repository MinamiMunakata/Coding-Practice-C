/* ************************************ */
/*                                      */
/* vc_is_prime.c                       */
/*                                      */
/* By: Kenta, Suelen, Minami            */
/*                                      */
/* ************************************ */

#include <stdio.h>

int vc_is_prime(int n){
    int i;
    if (n <= 1) return 0;
    if (n == 2) return 1;
    i = 2;
    while (i < n)
    {
        if (n % i == 0) return 0;
        i++;
    }
    return 1;
}