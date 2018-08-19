/* ************************************ */
/*                                      */
/* vc_show_tab.c                        */
/*                                      */
/* By: Emre E, Javier, Minami           */
/*                                      */
/* ************************************ */

#include "vc_stock.h"

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

void vc_putstr(char *str) {
    int i = 0;
    while(*(str + i))
    {
        putchar(*(str + i));
        i++;
    }
    putchar('\n');
}

void my_putnum(int num) {
    if (num < 10) putchar(num + '0');
    else
    {
        my_putnum(num / 10);
        putchar(num % 10 + '0');
    }
}

void vc_show_tab(struct s_stock *stock)
{
    while (stock->str)
    {
        vc_putstr(stock->str);
        my_putnum(stock->size_param);
        putchar('\n');
        vc_print_words(stock->words);
        stock++;
    }
}
