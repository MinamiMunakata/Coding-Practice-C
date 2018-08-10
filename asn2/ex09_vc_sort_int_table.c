/* ************************************ */
/*                                      */
/* vc_sort_int_tab.c                    */
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

void vc_sort_int_tab(int *tab, int size) {
    int index_of_min = 0;
    int min = tab[index_of_min];
    int start = 0;
    while(start < size - 1)
    {
        int i = start;
        index_of_min = start;
        min = tab[index_of_min];
        while (i < size)
        {
            if (tab[index_of_min] > tab[i])
            {
                index_of_min = i;
                min  = tab[i];
            }
            i++;
        }
        vc_swap(tab + start, tab + index_of_min);
        start++;
    }
}

