/* ************************************ */
/*                                      */
/* vc_sort_params.c                     */
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

int vc_strcmp(char *s1, char *s2) {
    int less;
    int equal;
    int greater;
    int i;
    less = -1;
    equal = 0;
    greater = 1;
    i = 0;
    while (*(s1 + i) != '\0' || *(s2 + i) != '\0')
    {
        if (*(s1 + i) > *(s2 + i)) return greater;
        if (*(s1 + i) < *(s2 + i)) return less;
        i++;
    }
    return equal;
}

void my_sort(int argc, char **argv) {
    int start;
    int i;
    int min;
    start = 1;
    while (start < argc - 1)
    {
        i = start;
        min = start;
        while (i < argc)
        {
            if (vc_strcmp(argv[min], argv[i]) > 0) min = i;
            i++;
        }
        char *temp = argv[start];
        argv[start] = argv[min];
        argv[min] = temp;
        start++;
    }
}

int main(int argc, char *argv[])
{
    my_sort(argc, argv);
    for (int i = 1; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    return 0;
}