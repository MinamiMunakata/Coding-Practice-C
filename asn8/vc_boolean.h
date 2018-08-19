
/* ************************************ */
/*                                      */
/* vc_boolean.c                         */
/*                                      */
/* By: Emre E, Javier, Minami           */
/*                                      */
/* ************************************ */

#include <unistd.h>
#include <stdbool.h>    

#define TRUE true
#define FALSE false
#define SUCCESS 0
#define EVEN(n) ((n > 0) && (n % 2 == 0)) ? TRUE : FALSE
#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"

typedef bool t_bool;