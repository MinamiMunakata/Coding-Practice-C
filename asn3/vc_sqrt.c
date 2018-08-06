/* ************************************ */
/*                                      */
/* vc_sqrt.c                            */
/*                                      */
/* By: Kenta, Suelen, Minami            */
/*                                      */
/* ************************************ */

#include <stdio.h>

int vc_sqrt(int n) {
    int low;
    int high;
    int mid;
    low = 0;
    high = n / 2;
    if (n < 4) return 0;
    while(high - low > 1)
    {
        mid = low + (high - low) / 2;
        if (mid * mid >= n) high = mid;
        else low = mid;
    }
    if (n % (high * high) == 0) return high;
    return 0;
}
