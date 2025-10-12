#include <stdio.h>

int add(int a, int b); // function prototype so we can
                       // put the main first
void print_hello(); // function prototype so we can
                    // put the main first

int main() {
    printf("%d\n", add(5, 3));
    return 0;
}

int add(int a, int b) {
    int c = a+b;
    return c;
}

void print_hello() {
    printf("hello world\n");
}
