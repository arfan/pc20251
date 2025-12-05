#define CONCAT(a, b) a ## b
#include <stdio.h>

int main(){
    int HelloWorld = 10;

    CONCAT(Hel, loWorld) = 20;

    printf("HelloWorld=%d\n", CONCAT(Hello, World));
    
    return 0;
}