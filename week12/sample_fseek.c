#include <stdio.h>


int main() {
    FILE *fp = fopen("sample_fseek.txt", "r");
    if (!fp) {
        printf("Cannot open file!\n");
        return 1;
    }
    printf("ftell=%d\n", ftell(fp));

    //seek
    fseek(fp, 5, SEEK_SET);
    printf("ftell=%d\n", ftell(fp));
    printf("getc=%c\n", getc(fp));    
    printf("ftell=%d\n", ftell(fp));

    fseek(fp, 1, SEEK_CUR);
    printf("ftell=%d\n", ftell(fp));
    printf("getc=%c\n", getc(fp));
    
    return 0;
}