#include <stdio.h>


int add(int a, int b) {
    int c = a+b;
    return c;
}

void print_hello() {
    printf("hello world\n");
}

int main() {
    printf("%d\n", add(5, 3));
    return 0;
}