#include <stdio.h>
int main() {
    int age = 22;
    int hasLicense = 1;

    if (age >= 18 && hasLicense) {
        printf("You can drive.\n");
    } else {
        printf("You cannot drive.\n");
    }

    return 0;
}
