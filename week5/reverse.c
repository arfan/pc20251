#include <stdio.h>

int main() {
    int scores[5] = {80, 90, 75, 85, 100};
    
    for (int i = 4; i >= 0; i--) {
        printf("%d ", scores[i]);
    }
    
    return 0;
}