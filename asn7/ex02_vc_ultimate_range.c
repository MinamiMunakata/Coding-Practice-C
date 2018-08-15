/* ************************************ */
/*                                      */
/* vc_ultimate_range.c                  */
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

int vc_ultimate_range(int **range, int min, int max) {
    if (min >= max) *range = NULL;
    *range = vc_range(min, max);
    if ((max - min) >= 0) return max - min;
    return 0;
}

int main(int argc, char const *argv[])
{
    int **range;
    printf("%d\n", vc_ultimate_range(range, 15, 10));
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", (*range)[i]);
    }
    // You can access the array with *range; 
    return 0;
}
