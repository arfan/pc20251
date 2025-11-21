#include <stdio.h>

int main() {
    FILE *fp = fopen("sample_fscanf_getc.txt", "r");
    if (!fp) {
        printf("Cannot open file!\n");
        return 1;
    }

    int x;
    char c;
    fscanf(fp, "%d %c", &x, &c);
    printf("x:[%d] c:[%c]\n", x, c);

    fclose(fp);
    return 0;
}
