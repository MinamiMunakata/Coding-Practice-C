/* ************************************ */
/*                                      */
/* vc_str_is_numeric.c                  */
/*                                      */
/* By: Emre E, Javier, Minami           */
/*                                      */
/* ************************************ */
#include <stdio.h>

int vc_str_is_numeric(char *str) {
    int num;
    int non_num;
    int i;
    num = 1; // num or empty
    non_num = 0;
    i = 0;
    while (*(str + i) != '\0')
    {
        if (*(str + i) < 48 || *(str + i) > 57)
        {
            return non_num;
        }
        i++;
    }
    return num;
}
