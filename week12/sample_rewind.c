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

    rewind(fp);
    printf("ftell=%d\n", ftell(fp));    
    
    fseek(fp, -1, SEEK_END); //used for getting to the end of file
    printf("ftell=%d\n", ftell(fp));
    printf("last char=%c", getc(fp));

    return 0;
}