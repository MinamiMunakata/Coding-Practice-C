/* ************************************ */
/*                                      */
/* vc_print_comb.c                      */
/*                                      */
/* By: Bianca, Minami, Giada            */
/*                                      */
/* ************************************ */

#include <stdio.h>

void vc_print_comb(void) {
    int max = 10;
    for(int i = 0; i < (max - 2); i++)
    {
        for(int j = i + 1; j < (max - 1); j++)
        {
            for(int k = j; k < max; k++)
            {
                if (i == j || j == k || k == i)
                {
                    continue;
                }

                putchar(i + 48);
                putchar(j + 48);
                putchar(k + 48);
                putchar(',');
            }
        }
    }
}