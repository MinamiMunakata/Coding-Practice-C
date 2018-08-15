/* ************************************ */
/*                                      */
/* vc_concat_params.c                   */
/*                                      */
/* By: Emre E, Javier, Minami           */
/*                                      */
/* ************************************ */

#include <stdio.h>
#include <stdlib.h>

int vc_strlen(char *str) {
    int i = 0;
    while(*(str + i) != '\0')
    {
        i++;
    }
    return i;
}

char *vc_concat_params(int argc, char **argv){
    int len;
    int i;
    int row;
    int col;
    len = 0;
    for (i = 1; i < argc; i++)
    {
        len += vc_strlen(argv[i]);
    }
    char *newstr = (char *)malloc(4 * (len + argc));
    i = 0;
    for (row = 1; row < argc; row++)
    {
        for (col = 0; col < vc_strlen(argv[row]); col++)
        {
            newstr[i] = argv[row][col];
            i++;
        }
        if (row >= argc - 1) newstr[i] = '\0';
        else newstr[i] = '\n';
        i++;
    }
    return newstr;
}

int main(int argc, char *argv[])
{
    /* code */
    printf("New string is:\n%s\n", vc_concat_params(argc, argv));
    return 0;
}
