#include<stdio.h>

int main(int argc, char *argv[]) {
    argv[1] = "Arfan";
    for (int i = 1; i < argc; i++) 
    {
        printf("Hi %s\n", argv[i]);
    }

    return 0;
}
