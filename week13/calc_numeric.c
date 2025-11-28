#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <ctype.h>

int is_numeric(const char *str) {
    if (str == NULL || strlen(str) == 0) {
        return 0;
    }
    int dot_count = 0;
    int has_digit = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '.') {
            dot_count++;
            if (dot_count > 1) {
                return 0;
            }
        } else if (isdigit(str[i])) {
            has_digit = 1;
        } else {
            return 0;  // Invalid character
        }
    }
    return has_digit;  // Must have at least one digit
}


int main(int argc, char *argv[]) {
    if(argc<4) {
        printf("Usage: calc <operation> <param1> <param2>");
        return 1;
    }

    if(!is_numeric(argv[2]) || !is_numeric(argv[3])) {
        printf("Use numeric value for param1 and param2");
        return 1;
    }

    float param1 = atof(argv[2]);
    float param2 = atof(argv[3]);
    
    if(strcmp(argv[1], "add") == 0) {
        printf("%f + %f = %f", param1, param2, param1+param2);
    }
    else if (strcmp(argv[1], "mul") == 0) {
        printf("%f * %f = %f", param1, param2, param1*param2);
    }
    else if (strcmp(argv[1], "sub") == 0) {
        printf("%f - %f = %f", param1, param2, param1-param2);
    }
    else {
        printf("Operation is not supported %s", argv[1]);
        return 1;
    }
    return 0;
}