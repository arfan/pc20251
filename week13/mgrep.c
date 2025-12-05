#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    if (argc < 3) {
        fprintf(stderr, "Usage: %s keyword text1 [text2 ...]\n", argv[0]);
        return 1;
    }

    char *keyword = argv[1];

    for (int i = 2; i < argc; i++) {
        if (strstr(argv[i], keyword) != NULL) {
            printf("%s\n", argv[i]);
        }
    }

    return 0;
}
