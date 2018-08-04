/* ************************************ */
/*                                      */
/* vc_print_comb2.c                      */
/*                                      */
/* By: Bianca, Minami, Giada            */
/*                                      */
/* ************************************ */

#include <stdio.h>

void vc_print_comb2(void) {
    int i;
    int j;
    int spc;

    spc = 32;
    for(i = 0; i <= 98; i++)
    {
        for(j = i; j <= 99; j++)
        {
            if (i == j) 
            {
                continue;
            }
            vc_print_helper(i);
            putchar(spc);
            vc_print_helper(j);
            putchar(',');
            putchar(spc);
        }
    }
}

void vc_print_helper(int num)
{
    int convert;

    convert = 48;
    if (num < 10)
    {
        putchar(convert);
        putchar(num + convert);
    }
    else
    {
        putchar((num / 10) + convert);
        putchar((num % 10) + convert);
    }
}