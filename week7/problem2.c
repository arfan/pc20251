/*
Write a C program that will ask user for input (number) and it will print stars triangle like this

Sample input 5

*
**
***
****
*****

Sample input 3
*
**
***

*/

#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);

    printf("num=%d\n", a);

    for(int i=0;i<a;i++) {
        for(int j=0;j<=i;j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}