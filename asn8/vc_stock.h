
/* ************************************ */
/*                                      */
/* vc_stock.c                           */
/*                                      */
/* By: Emre E, Javier, Minami           */
/*                                      */
/* ************************************ */

#include <stdlib.h>
#include <stdio.h>
#define SPC 32
#define TAB 9
#define NL 10
#define SIZE_CHAR_POINTER 4

typedef struct s_stock
{
    int size_param;
    char *str;
    char *copy;
    char **words;

} t_stock;

int vc_strlen(char *str) {
    int i = 0;
    while(*(str + i))
    {
        i++;
    }
    return i;
}

char *vc_strcpy(char *dest, char *src) {
    int src_len;
    int dest_len;
    int i;
    int j;
    i = 0;
    j = 0;
    src_len = vc_strlen(src);
    dest_len = vc_strlen(dest);
    while (*(src + i) != '\0')
    {
        *(dest + i) = *(src + i);
        i++;
    }
    while (*(dest + j + src_len) != '\0')
    {
        *(dest + j + src_len) = '\0';
        j++;
    }
    return dest;
}

char *vc_strdup(char *src) {
    char *newstr;
    int size;
    size = vc_strlen(src) + 1;
    if (src != NULL)
    {
        newstr = (char *)malloc(size);
        newstr[size - 1] = '\0';
        newstr = vc_strcpy(newstr, src);
    }
    return newstr;
}

int num_of_row(char *str, int len) {
    int i;
    int row;
    row = 0;
    for (i = 0; i <= len; i++)
    {
        if (i > 0)
        {
            if (*(str + i) == SPC || *(str + i) == TAB || *(str + i) == NL || *(str + i) == '\0')
            {
                if (*(str + i - 1) != SPC && *(str + i - 1) != TAB && *(str + i - 1) != NL && *(str + i - 1) != '\0')
                {
                    row++;
                }
            }
        }
    }
    row++;
    return row;
}

char **creat_container(char *str, int len) {
    char **container;
    container = (char **)malloc(num_of_row(str, len) * SIZE_CHAR_POINTER);
    if (container == NULL) printf("ALLOCATE ERROR!\n");
    else
    {
        int i;
        int letter;
        int row;
        letter = 0;
        row = 0;
        for (i = 0; i <= len; i++)
        {
            letter++;
            if (*(str + i) == SPC || *(str + i) == TAB 
                || *(str + i) == NL || *(str + i) == '\0')
            {
                if (letter > 1)
                {
                    char *word;
                    word = (char *)malloc(letter);
                    if (word == NULL) printf("ALLOCATE ERROR!\n");
                    else container[row] = word;
                    row++;
                }
                letter = 0;
            }
        }
        container[num_of_row(str, len) - 1] = 0;   
    }
    return container;
}

char **vc_split_whitespaces(char *str){
    char **newargv;
    int i;
    int row;
    int col;
    row = 0;
    col = 0;
    newargv = creat_container(str, vc_strlen(str));
    for (i = 0; i <= vc_strlen(str); i++)
    {
        if (*(str + i) == SPC || *(str + i) == TAB 
            || *(str + i) == NL || *(str + i) == '\0')
        {
            newargv[row][col] = '\0';
            if (vc_strlen(newargv[row]) > 0) row++;
            col = 0;
        }
        else
        {
            newargv[row][col] = str[i];
            col++;
        }
    }
    return newargv;
}
