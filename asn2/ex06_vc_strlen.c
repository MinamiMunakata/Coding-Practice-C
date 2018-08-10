/* ************************************ */
/*                                      */
/* vc_strlen.c                          */
/*                                      */
/* By: Bianca, Minami, Giada            */
/*                                      */
/* ************************************ */

#include <stdio.h>

int vc_strlen(char *str) {
    int i = 0;
    while(*(str + i) != '\0')
    {
        i++;
    }
    return i;
}