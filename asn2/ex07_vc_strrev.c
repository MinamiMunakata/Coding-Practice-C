/* ************************************ */
/*                                      */
/* vc_strrev.c                              */
/*                                      */
/* By: Bianca, Minami, Giada            */
/*                                      */
/* ************************************ */

#include <stdio.h>

int vc_strlen(char *str) {
    int i = 0;
    while(*(str + i) > 0)
    {
        i++;
    }
    return i;
}

char *vc_strrev(char *str) {

    int size = vc_strlen(str);
    char *end = str + size - 1;
    char temp;
    int step = 0;
    
    while(str < end)
    {
        temp = *str;
        *str = *end;
        *end = temp;

        end--;
        str++;
        step++;
    }
    return str - step;
}