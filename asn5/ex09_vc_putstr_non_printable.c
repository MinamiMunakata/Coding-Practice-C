/* ************************************ */
/*                                      */
/* vc_putstr_non_printable.c            */
/*                                      */
/* By: Emre E, Javier, Minami           */
/*                                      */
/* ************************************ */

#include <stdio.h>

void print_hex(int dec)
{
    putchar('/');
    if (dec % 16 < 10) 
    {
        putchar(dec / 16 + '0');
        putchar(dec % 16 + '0');
    }
    else
    {
        putchar(dec / 16 + '0');
        putchar(dec % 16 + 87);
    }
}

void vc_putstr_non_printable(char *str) {
    int i;
    i = 0;
    while (*(str + i))
    {
        if (*(str + i) <= 31)
        {
            int dec = *(str + i);
            if (dec < 10) print_hex(dec);
            else print_hex(dec);
        }
        else putchar(*(str + i));
        i++;
    }
}
