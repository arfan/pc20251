#include <stdio.h>

int main() {
    FILE *fp = fopen("sample_read_fgets.txt", "r");
    if (!fp) { 
        printf("Cannot open file!\n"); 
    }

    char buffer[11];
    int res;

    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("buffer content = [%s]\n", buffer);
    }

    if (feof(fp)) {
        printf("Reached end of file.\n");
    } else {
        printf("Error reading file.\n");
    }
}
