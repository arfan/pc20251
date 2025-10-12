#include <stdio.h>

int main()
{
    int a = 5;
    int b = 100;
    
    {
        int a = 10;
        printf("a=%d\n", a);
        
        {
            int b = 3000;
            printf("b=%d\n", b);
        }
    }
    printf("a=%d\n", a);
    printf("b=%d\n", b);
}