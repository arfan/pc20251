#include <stdio.h>

int main() {
    int prices[5] = {12000, 15000, 8000, 10000, 20000};
    for (int i = 0; i < 5; i++) {
        printf("Item %d: %d\n" , i+1, prices[i]);
    }

    return 0;
}