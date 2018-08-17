/* ************************************ */
/*                                      */
/* vc_print_params.c                    */
/*                                      */
/* By: Emre E, Javier, Minami           */
/*                                      */
/* ************************************ */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    for (i = 1; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    return 0;
}