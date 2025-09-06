#include <stdio.h>

int main() {
    int A, B, Max;
    printf("Enter two numbers (A and B): ");
    scanf("%d %d", &A, &B);

    if (A > B) {
        Max = A;
    } else {
        Max = B;
    }

    printf("Max = %d\n", Max);
    return 0;
}
