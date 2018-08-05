/* ************************************ */
/*                                      */
/* vc_ultimate_div_mod.c                              */
/*                                      */
/* By: Bianca, Minami, Giada            */
/*                                      */
/* ************************************ */

#include <stdio.h>

void vc_ultimate_div_mod(int *a, int *b) {
    int div = *a / *b;
    int mod = *a % *b;
    *a = div;
    *b = mod;
}

