#include <stdio.h>
int main() {
    int a = 0;

    if(a < 0) {
        printf("a is negative\n");
    } else if(a > 0) {
        printf("a is positive\n");
    } else {
        printf("a is zero\n");
    }
    return 0;
}
