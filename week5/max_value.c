#include <stdio.h>

int main() {
    int scores[5] = {80, 90, 75, 85, 100};
    int max = scores[0];

    for (int i = 1; i < 5; i++) {
        if(scores[i] > max) {
            max = scores[i];
        }
    }

    printf("max=%d\n", max);

    return 0;
}