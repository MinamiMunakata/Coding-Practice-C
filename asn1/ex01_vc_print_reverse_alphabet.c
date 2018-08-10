/* ************************************ */
/*                                      */
/* vc_print_reverse_alphabet.c          */
/*                                      */
/* By: Bianca, Minami, Giada            */
/*                                      */
/* ************************************ */

#include <stdio.h>

void vc_print_reverse_alphabet(void) {
    char ch;
    for(ch = 'z'; ch >= 'a'; ch--)
    {
        putchar(ch);
    }
}