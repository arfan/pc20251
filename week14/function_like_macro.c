#include <stdio.h>

// Function-like Macro definition
#define min(a, b) (((a) < (b)) ? (a) : (b))

int main(){

    // Given two number a and b
    int x = 18, y = 76;

    printf("Minimum: %d", min(x, y));

    return 0;
}