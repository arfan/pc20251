#include <stdio.h>
#include "util.h"
#define MAX 10

int a[MAX];
void main() {
    // fill array, sort it, print results
    int i;
    
    // Fill array with random numbers
    printf("Original array:\n");
    for (i = 0; i < MAX; i++) {
        a[i] = rand() % 100;
        printf("%d ", a[i]);
    }
    printf("\n\n");
    
    // Sort the array
    bubble_sort(MAX, a);
    
    // Print sorted array
    printf("Sorted array:\n");
    for (i = 0; i < MAX; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

