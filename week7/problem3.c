/*
Write a C program that prints a number triangle

Description:
Ask the user to enter a number n, and print a triangle using numbers instead of stars.

Sample Input:

Enter a number: 4


Sample Output:

1
12
123
1234

*/


#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);

    printf("num=%d\n", a);

    for(int i=1;i<=a;i++) {
        for(int j=1;j<=i;j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}