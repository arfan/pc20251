#include <stdio.h>

int main() {
    FILE *fp = fopen("log.txt", "a");
    if (!fp) { 
        printf("Cannot open file!\n"); 
    }
    fprintf(fp, "Some text\n");
    return 0;
}