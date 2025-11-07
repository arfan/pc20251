#include <stdio.h>

int main() {
    union Number {
        int x;
        float y;
    };
    union Number value;

    value.x = 10;
    value.y = 25.7;

    printf("value.x %d\n", value.x);
    printf("value.y %f\n", value.y);
    return 0;
}