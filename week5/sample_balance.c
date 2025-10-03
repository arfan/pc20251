#include <stdio.h>

int main() {
    int balances[3] = {5000, 12000, 3000};
    for (int i = 0; i < 3; i++) {
        printf("Account %d: %d\n", i+1, balances[i]);
    }

    return 0;
}