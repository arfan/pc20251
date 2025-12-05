#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <path>\n", argv[0]);
        return 1;
    }

    char *path = argv[1];
    char current[1024] = "/";
    char *token = strtok(path, "/");

    while (token != NULL) {
        if (strlen(token) > 0) {
            strcat(current, token);
            printf("%s\n", current);
            strcat(current, "/");
        }
        token = strtok(NULL, "/");
    }

    return 0;
}
