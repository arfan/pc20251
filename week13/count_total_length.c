#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]) {
    int total = 0;

    for(int i=1;i<argc;i++) {
        total = total+strlen(argv[i]);
    }

    printf("total length=%d\n", total);

    return 0;
}