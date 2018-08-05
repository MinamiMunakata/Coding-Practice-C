/* ************************************ */
/*                                      */
/* vc_div_mod.c                         */
/*                                      */
/* By: Bianca, Minami, Giada            */
/*                                      */
/* ************************************ */

#include <stdio.h>

void vc_div_mod(int a, int b, int *div, int *mod) {
    *div = a / b;
    *mod = a % b;
}