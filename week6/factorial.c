#include <stdio.h>

//recursive function
int factorial(int a) {
    printf("function call factorial %d\n", a);
    //BASE Case
    if(a==1 || a==0) {
        return 1;
    }

    return a * factorial(a-1);
}

int main()
{
    printf("factorial 6=%d\n", factorial(6));
}