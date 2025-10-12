#include <stdio.h>


int multiply(int a, int b) {
    int result = a*b;

    a = 10;
    b = 20;

    return result;
}

int main() {
    int a = 5;
    int b = 4;
    
    int c = multiply(a, b); //call by value
    printf("c= %d\n", c);

    printf("a= %d\n", a);
    printf("b= %d\n", b);

    scanf("%d", &c); //sample call by ref
    printf("c= %d\n", c);

    return 0;
}