/* ************************************ */
/*                                      */
/* ft_print_memory.c                    */
/*                                      */
/* By: Emre E, Javier, Minami           */
/*                                      */
/* ************************************ */

#include <stdio.h>

void dec_to_hex(unsigned int dec)
{
    if (dec / 16 < 16) putchar(dec / 16 + '0');
    else dec_to_hex(dec / 16);
    if (dec % 16 < 10) putchar(dec % 16 + '0');
    else putchar(dec % 16 + 87);
}

void print_hex_from_char(void *addr, int *i, unsigned int size)
{
    char *str = addr;
    int max = *i + 16;
    while (*i < max && *i < size - 1)
    {
        if (*i % 2 == 0) putchar(' ');
        dec_to_hex(*(str + *i));
        (*i)++;
    }
    putchar(' ');
    *i -= 16;
    while (*i < max && *i < size - 1)
    {
        if (*(str + *i) <= 31 ||*(str + *i) >= 123) putchar('.');
        else putchar(*(str + *i));
        (*i)++;
    }
    putchar('\n');
}

void *ft_print_memory(void *addr, unsigned int size)
{
    int i;
    int *ptr;
    i = 0;
    ptr = &i;
    while (i < size - 1)
    {
        dec_to_hex((unsigned int)addr + i);
        putchar(':');
        print_hex_from_char(addr, ptr, size);
    }
    return addr;
}
