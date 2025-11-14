/* Fig. 7.13: fig07_13.c
   Attempting to modify a constant pointer to
   non-constant data */

#include <stdio.h>

int main()
{
    int x, y;

    int * const ptr = &x; /* ptr is a constant pointer */

    *ptr = 7;   /* OK: modifying x */
    ptr = &y;   /* ERROR: cannot change constant pointer */

    return 0;
}