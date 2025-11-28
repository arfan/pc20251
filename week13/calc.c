#include<stdio.h>
#include<string.h>
#include <stdlib.h>

// ./calc add 1 2
int main(int argc, char *argv[]) {
    if(argc<4) {
        printf("Usage: calc <operation> <param1> <param2>");
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