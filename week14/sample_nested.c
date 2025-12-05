#define DOUBLE(x) (2 * (x))
#define TRIPLE(x) (3 * (x))
#define DOUBLE_TRIPLE(x) DOUBLE(TRIPLE(x))


#include <stdio.h>

int main() {
    printf("value=%d", DOUBLE_TRIPLE(5));
}
