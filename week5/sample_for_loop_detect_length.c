#include <stdio.h>

int main() {
    int prices[] = {12000, 15000, 8000, 10000, 20000};

    int length = sizeof(prices) / sizeof(int);
    for (int i = 0; i < length; i++) {
        printf("Item %d: %d\n" , i+1, prices[i]);
    }

    return 0;
}