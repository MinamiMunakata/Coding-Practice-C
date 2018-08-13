/* ************************************ */
/*                                      */
/* vc_str_is_uppercase.c                */
/*                                      */
/* By: Emre E, Javier, Minami           */
/*                                      */
/* ************************************ */
#include <stdio.h>

int vc_str_is_uppercase(char *str) {
    int upper;
    int non_upper;
    int i;
    upper = 1; // upper or empty
    non_upper = 0;
    i = 0;
    while (*(str + i) != '\0')
    {
        if (*(str + i) < 65 || *(str + i) > 90)
        {
            return non_upper;
        }
        i++;
    }
    return upper;
}