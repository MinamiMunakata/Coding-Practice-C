/* ************************************ */
/*                                      */
/* vc_swap.c                            */
/*                                      */
/* By: Bianca, Minami, Giada            */
/*                                      */
/* ************************************ */

#include <stdio.h>

void vc_swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
