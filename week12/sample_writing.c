#include <stdio.h>

int main() {
    FILE *fp = fopen("sample_write.txt", "w");
    if (!fp) { 
        printf("Cannot open file!\n"); 
    }
    
    int x = 100;

    fprintf(fp, "Value = %d", x);
    fputs("Hello", fp);
    putc('X', fp);

    return 0;
}