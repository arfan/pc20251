//Write a C program that checks whether a given number is odd or even

#include<stdio.h>

int main() {
    int number = 6;
    if(number%2==0) {
        printf("number is even\n");
    } else {
        printf("number is odd\n");
    }
    return 0;
}