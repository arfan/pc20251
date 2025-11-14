/* Fig. 7.13: fig07_13.c
   Attempting to modify a constant pointer to
   non-constant data */

#include <stdio.h>

int main()
{
    const int x=100;
    int y;
    // int *const ptr = &x;
    // ptr = &y;

    // const int *myPtr = &x;
    // printf("address of x = %p\n", myPtr);
    // myPtr = &y;
    // printf("address of y = %p\n", myPtr);

    const int *const Ptr = &x;

    // x = 10;
    // Ptr = &y;

    return 0;
}