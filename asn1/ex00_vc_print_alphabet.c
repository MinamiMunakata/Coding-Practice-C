/* ************************************ */
/*                                      */
/* vc_print_alphabet.c                  */
/*                                      */
/* By: Bianca, Minami, Giada            */
/*                                      */
/* ************************************ */

#include <stdio.h>

void vc_print_alphabet(void) {
    char ch;
    for(ch = 'a'; ch <= 'z'; ch++)
    {
        putchar(ch);
    }
}