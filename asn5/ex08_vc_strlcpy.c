/* ************************************ */
/*                                      */
/* vc_strlcopy.c                        */
/*                                      */
/* By: Emre E, Javier, Minami           */
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

char *my_strncpy(char *dest, char *src, unsigned int max) {
    int i;
    i = 0;
    while (i < max && *(src + i) != '\0')
    {
        *(dest + i) = *(src + i);
        i++;
    }
    i = vc_strlen(src);
    while (i <= max)
    {
        *(dest + i) = '\0';
        i++;
    }
    return dest;
}

unsigned int vc_strlcpy(char *dest, char *src, unsigned int size) {
    unsigned int max;
    max = size - 1;
    my_strncpy(dest, src, max);
    return (unsigned int)vc_strlen(dest);
}
