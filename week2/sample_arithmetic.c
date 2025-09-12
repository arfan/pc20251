#include <stdio.h>

int main() {
    int a=7, b=5;

    printf("a + b = %d\n", a+b);
    printf("a - b = %d\n", a-b);
    printf("a * b = %d\n", a*b);
    printf("a / b = %d\n", a/b);
    printf("a %% b = %d\n", a%b);

    if(a>b){
        printf("a is bigger than b\n");
    }

    return 0;
}
