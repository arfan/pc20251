/* util.c */
#include "util.h"

int rand_seed = 10;
/* Generates a pseudo-random number */
int rand() {
    rand_seed = rand_seed * 1103515245 + 12345;
    return (unsigned int)(rand_seed / 65536) % 32768;
}

void bubble_sort(int m, int a[]) {
    int i, j, temp;
    for (i = 0; i < m - 1; i++) {
        for (j = 0; j < m - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                // Swap elements
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}