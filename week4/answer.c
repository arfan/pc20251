#include <stdio.h>

int main() {
    char name[50];
    int age;

    // Ask user for name
    printf("Enter your name: ");
    scanf("%49s", name); // safer than just %s

    // Ask user for age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Decide greeting based on age
    if (age >= 0 && age <= 15) {
        printf("Hi anakku %s\n", name);
    } else if (age >= 16 && age <= 20) {
        printf("Hi mas %s\n", name);
    } else if (age > 20) {
        printf("Hi pak %s\n", name);
    } else {
        printf("Invalid age entered.\n");
    }

    return 0;
}