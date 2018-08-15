/* ************************************ */
/*                                      */
/* vc_range.c                           */
/*                                      */
/* By: Emre E, Javier, Minami           */
/*                                      */
/* ************************************ */

#include <stdio.h>
#include <stdlib.h>

int *vc_range(int min, int max) {
    if (min >= max) return NULL;
    int size = max - min;
    int *arr = (int *)malloc(4 * size);
    int i;
    i = 0;
    while(min < max)
    {
        arr[i] = min;
        min++;
        i++;
    }
    return arr;
}

int main(int argc, char const *argv[])
{
    /* code */
    int *arr = vc_range(5, 10);
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
