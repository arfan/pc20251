#include <stdio.h>

int main() {    
    int scores[3];
    int i = 0;
    do {
        printf("Enter score %d: ", i+1);
        scanf("%d", &scores[i]);
        if (scores[i] >= 0 && scores[i] <= 100) {
            i++;
        } else {
            printf("Invalid! Try again.\n");
        }
    } while (i < 3);
}