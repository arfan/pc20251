#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char *nama;
    if (argc > 1) {
        nama = argv[1];
    } else {
        nama = getenv("NAMA");
    }

    printf("nama=%s\n", nama);

    return 0;
}
