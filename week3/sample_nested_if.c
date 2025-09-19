#include <stdio.h>
int main() {
    int age = 4;
    int hasTicket = 1;

    if (age >= 18) {
        if (hasTicket) {
            printf("Welcome to the concert!\n");
        } else {
            printf("Please buy a ticket first.\n");
        }
    } else {
        printf("Sorry, under 18 not allowed.\n");
    }

    return 0;
}
