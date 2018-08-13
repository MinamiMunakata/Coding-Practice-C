/* ************************************ */
/*                                      */
/* vc_str_is_lowereric.c                */
/*                                      */
/* By: Emre E, Javier, Minami           */
/*                                      */
/* ************************************ */
#include <stdio.h>

int vc_str_is_lowereric(char *str) {
    int lower;
    int non_lower;
    int i;
    lower = 1; // lower or empty
    non_lower = 0;
    i = 0;
    while (*(str + i) != '\0')
    {
        if (*(str + i) < 97 || *(str + i) > 122)
        {
            return non_lower;
        }
        i++;
    }
    return lower;
}

