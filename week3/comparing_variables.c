#include <stdio.h>
int main() {
    int a = 10, b = 20;

    if (a > b) {
        printf("a is larger\n");
    } else if (a < b) {
        printf("b is larger\n");
    } else {
        printf("Both are equal\n");
    }

    return 0;
}
