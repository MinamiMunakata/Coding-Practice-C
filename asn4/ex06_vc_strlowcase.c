/* ************************************ */
/*                                      */
/* vc_strlowcase.c                      */
/*                                      */
/* By: Kenta, Suelen, Minami            */
/*                                      */
/* ************************************ */

#include <stdio.h>

char *vc_strlowcase(char *str) {
    int i;
    int num;
    for (i = 0; *(str + i) != '\0'; i++)
    {
        if (*(str + i) >= 65 && *(str + i) <= 90)
        {
            *(str + i) += 32; 
        }
    }
    return str;
}
