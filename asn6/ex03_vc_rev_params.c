/* ************************************ */
/*                                      */
/* vc_rev_params.c                      */
/*                                      */
/* By: Emre E, Javier, Minami           */
/*                                      */
/* ************************************ */

#include <stdio.h>

int main(int argc, char const *argv[])
{

    int i;
    for (i = argc; i > 0; i--)
    {
        printf("%s\n", argv[i]);
    }
    return 0;
}