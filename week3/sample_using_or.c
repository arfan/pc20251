#include <stdio.h>
int main() {
    int day = 1; // 6 = Saturday

    if (day == 6 || day == 7) {
        printf("It's weekend!\n");
    } else {
        printf("It's weekday.\n");
    }

    return 0;
}
