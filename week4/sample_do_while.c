#include<stdio.h>

int main() {
    int counter = 100;

    do {
        printf("%d\n", counter);
        counter++;
    } while (counter <= 10);

    printf("%d\n", counter);

    return 0;
}