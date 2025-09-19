#include <stdio.h>
int main() {
    int score = 90;

    if (score >= 60) {
        printf("Grade C\n");
    } else if (score >= 75) {
        printf("Grade B\n");
    } else if (score >= 90) {
        printf("Grade A\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}

