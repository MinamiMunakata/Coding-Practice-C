/* ************************************ */
/*                                      */
/* vc_sort_words.c                      */
/*                                      */
/* By: Juan, Nagisa, Minami             */
/*                                      */
/* ************************************ */

#include <stdio.h>

int vc_strcmp(char *s1, char *s2)
{
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
        if (*(s1 + i) > *(s2 + i))
            return greater;
        if (*(s1 + i) < *(s2 + i))
            return less;
        i++;
    }
    return equal;
}

int vc_strlen(char *str)
{
    int i = 0;
    while (*(str + i))
    {
        i++;
    }
    return i;
}

void vc_sort_words(char **words)
{
    int start;
    int i;
    int min;
    start = 1;
    while (*(words + start))
    {
        i = start;
        min = start;
        while (*(words + i))
        {
            if (vc_strcmp(*(words + min), *(words + i)) > 0)
                min = i;
            i++;
        }

        char *temp = words[start];
        words[start] = words[min];
        words[min] = temp;
        start++;
    }
}
