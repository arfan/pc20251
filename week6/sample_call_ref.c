#include <stdio.h>

void update_function(int *a) {
    *a = 5000;
}

int main() {
    int z = 10;
    printf("value of z = %d\n", z);

    update_function(&z);
    printf("value of z = %d\n", z);
}