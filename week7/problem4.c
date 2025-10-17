// Write a C program to check whether a number is positive, negative, or zero
#include<stdio.h>

int main() {
    int number = -6;
    if(number > 0) {
        printf("number is positive\n");
    } else if (number < 0){
        printf("number is negative\n");
    } else {
        printf("number is zero\n");
    }
    return 0;
}