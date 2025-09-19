#include <stdio.h>
int main() {
    int score = 78;

    if (score >= 60 && score < 75) {
        printf("Grade C\n");
    }

    if (score >= 75 && score < 90) {
        printf("Grade B\n");
    }

    if (score >= 90) {
        printf("Grade A\n");
    }


    return 0;
}
