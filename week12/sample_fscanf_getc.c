#include <stdio.h>

int main() {
    FILE *fp = fopen("sample_fscanf_getc.txt", "r");
    if (!fp) {
        printf("Cannot open file!\n");
        return 1;
    }

    int x;
    fscanf(fp, "%d", &x);
    printf("Read integer: [%d]\n", x);

    char c = getc(fp);
    printf("Read character: [%c]\n", c);

    fclose(fp);
    return 0;
}
