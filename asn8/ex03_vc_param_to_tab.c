/* ************************************ */
/*                                      */
/* vc_param_to_tab.c                    */
/*                                      */
/* By: Emre E, Javier, Minami           */
/*                                      */
/* ************************************ */

#include "vc_stock.h"

struct s_stock *vc_param_to_tab(int ac, char **av) {
    int row;
    int col;
    t_stock *array;
    array = (t_stock *)malloc(sizeof(t_stock) * (ac + 1));
    if (array == NULL)
    {
        printf("Error: memory allocation.\n");
        return NULL;        
    }
    for (row = 0; row <= ac; row++)
    {
        t_stock *stock;
        stock = (t_stock *)malloc(sizeof(t_stock));
        if (stock == NULL)
        {
            printf("Error: memory allocation.\n");
            return NULL;        
        }
        if (row == ac)
        {
            printf("Hey");
            stock->str = 0;
            printf("s: %s\n", stock->str);
        }
        else
        {
            stock->size_param = vc_strlen(av[row]);
            stock->str = av[row];
            stock->copy = vc_strdup(av[row]);
            stock->words = vc_split_whitespaces(av[row]);
        }
        array[row] = *stock;
    }
    return array;
}
