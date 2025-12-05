#include <stdio.h>

#define CREATE_FUNCTION(name) \
void name() { \
    printf("Function %s called\n", #name); \
}

int main() {
    CREATE_FUNCTION(kuda);

    kuda();

    return 0;
}
