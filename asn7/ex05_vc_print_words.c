/* ************************************ */
/*                                      */
/* vc_print_words.c                     */
/*                                      */
/* By: Emre E, Javier, Minami           */
/*                                      */
/* ************************************ */

#include <stdio.h>
#include <stdlib.h>

int vc_strlen(char *str) {
    int i = 0;
    while(*(str + i))
    {
        i++;
    }
    return i;
}

int my_row_count(char **words) {
    int row = 0;
    while (*(words + row))
    {
        row++;
    }
    return row;
}

void vc_print_words(char **words) {
    int i;
    int row;
    int col;
    i = 0;

    for (row = 0; row < my_row_count(words); row++)
    {
        for (col = 0; col < vc_strlen(words[row]); col++)
        {
            putchar(words[row][col]);
        }
        putchar('\n');
    }
}

