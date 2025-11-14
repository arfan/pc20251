#include <stdio.h>

struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    int* ptr_int;
    char* ptr_char;
    float* ptr_float;
    struct Person* ptr_person;

    printf("Size of int* pointer: %zu bytes\n", sizeof(ptr_int));
    printf("Size of char* pointer: %zu bytes\n", sizeof(ptr_char));
    printf("Size of float* pointer: %zu bytes\n", sizeof(ptr_float));
    printf("Size of struct Person* pointer: %zu bytes\n", sizeof(ptr_person));
    
    printf("\nFor comparison:\n");
    printf("Size of struct Person (actual struct): %zu bytes\n", sizeof(struct Person));

    return 0;
}