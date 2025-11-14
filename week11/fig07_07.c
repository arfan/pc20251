/* Fig. 7.7: fig07_07.c
   Cube a variable using call-by-reference
   with a pointer argument */

#include <stdio.h>

void cubeByReference(int *);   /* prototype */

int main()
{
    int number = 5;

    printf("The original value of number is %d", number);
    cubeByReference(&number);
    printf("\nThe new value of number is %d\n", number);

    return 0;
}

void cubeByReference(int *nPtr)
{
    *nPtr = *nPtr * *nPtr * *nPtr;  /* cube number in main */
}