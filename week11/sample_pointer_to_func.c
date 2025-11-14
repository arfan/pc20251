#include <stdio.h>


char* greet_indonesia(){
    return "Halo";
}

char* greet_english(){
    return "Hello";
}

void greet(char* (*language)(), char *name) {
    printf("%s, %s\n", language(), name);
}

int main() {
    greet(greet_indonesia, "arfan");
    greet(greet_english, "abdul");
    return 0;
}