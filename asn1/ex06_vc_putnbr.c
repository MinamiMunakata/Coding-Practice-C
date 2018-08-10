/* ************************************ */
/*                                      */
/* vc_putnbr.c                          */
/*                                      */
/* By: Bianca, Minami, Giada            */
/*                                      */
/* ************************************ */

#include <stdio.h>

void vc_putnbr(int n)
{
   char c;
   if (n < 0)
   {
       n = -n;
       putchar('-');
   }
   if (n < 10)
   {
       putchar(n + '0');
   } else
   {
       vc_putnbr( n / 10 );
       vc_putnbr( n % 10 );
   }
}