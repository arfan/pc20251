#include <stdio.h>

// Multi-line Macro definition
#define ELE 1, \
            2, \
            3 + 4

int main(){

    // Array arr[] with elements
    // defined in macros
    int arr[] = { ELE };
    for (int i = 0; i < 3; i++) {
        printf("%d  ", arr[i]);
    }
    return 0;
}