#include <stdio.h>

int main() {
    FILE *input = fopen("hello.txt", "r");
    FILE *output = fopen("output.txt", "w");

    if (input == NULL || output == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    char line[256];
    while (fgets(line, sizeof(line), input) != NULL) {
        fputs(line, output);
    }

    fclose(input);
    fclose(output);
    return 0;
}
