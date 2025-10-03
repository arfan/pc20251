#include <stdio.h>

int main() {
    int time = 10;

    while(time > 0) {
        printf("%d...\n", time);
        time--;
    }

    printf("Go..\n");

    return 0;
}