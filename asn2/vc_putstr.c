/* ************************************ */
/*                                      */
/* vc_putstr.c                          */
/*                                      */
/* By: Bianca, Minami, Giada            */
/*                                      */
/* ************************************ */

#include <stdio.h>

void vc_putstr(char *str) {
    int i = 0;
    while(*(str + i) != '\0')
    {
        putchar(*(str + i));
        i++;
    }
}
