

#include <stdio.h>

int main() {
    int pin;
    do {
        printf("Enter PIN: ");
        scanf("%d", &pin);
    } while(pin != 1234);

    printf("Access Granted\n");

    return 0;
}