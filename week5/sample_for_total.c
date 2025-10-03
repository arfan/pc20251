#include <stdio.h>

int main() {
    int prices[5] = {12000, 15000, 8000, 10000, 20000};
    int total = 0; //don't forget to initizalize
    
    printf("total=%d\n", total);

    for (int i = 0; i < 5; i++) {
        total += prices[i];
    }

    printf("total=%d\n", total);

    return 0;
}