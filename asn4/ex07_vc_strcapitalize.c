/* ************************************ */
/*                                      */
/* vc_strlowcase.c                      */
/*                                      */
/* By: Kenta, Suelen, Minami            */
/*                                      */
/* ************************************ */


#include <stdio.h>

char *vc_strcapitalize(char *str) {
    int i;
    int num;
    for (i = 0; *(str + i) != '\0'; i++)
    {
        if (*(str + i) >= 65 && *(str + i) <= 90)
        {
            *(str + i) += 32; 
        }
        if ( i != 0 && !(*(str + i - 1) >= 65 && *(str + i - 1) <= 90) 
            && !(*(str + i - 1) >= 97 && *(str + i - 1) <= 122) 
            && (*(str + i) >= 97 && *(str + i) <= 122))
        {
            *(str + i) -= 32;
        }
    }
    if (*str >= 97 || *str <= 122) *str -= 32;
    return str;
}
