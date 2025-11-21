#include <stdio.h>


int main() {
    FILE *fp = fopen("log.txt", "a");
    if (!fp) {
        printf("Cannot open file!\n");
        return 1;
    }

    printf("ftell=%d\n", ftell(fp));
    return 0;
}