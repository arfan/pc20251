//Write a C program to find the largest of three numbers

#include<stdio.h>

int main() {
    int a,b,c;

    scanf("%d %d %d", &a, &b, &c);

    printf("a=%d, b=%d, c=%d\n", a, b, c);

    int largest = a;
    if(b>largest) largest = b;
    if(c>largest) largest = c;

    printf("largest=%d\n", largest);

    return 0;
}