/* ************************************ */
/*                                      */
/* vc_str_is_alpha.c                    */
/*                                      */
/* By: Emre E, Javier, Minami           */
/*                                      */
/* ************************************ */

#include <stdio.h>

int vc_str_is_alpha(char *str) {
    int alpha;
    int non_alpha;
    int i;
    alpha = 1; // alpha or empty
    non_alpha = 0;
    i = 0;
    while (*(str + i) != '\0')
    {
        if (!((*(str + i) >= 65 && *(str + i) <= 90)
            || (*(str + i) >= 97 && *(str + i) <= 122)))
        {
            return non_alpha;
        }
        i++;
    }
    return alpha;
}

