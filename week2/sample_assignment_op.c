#include <stdio.h>

int main() {
    int a=0;

    a=5;
    printf("value of a = %d\n", a);
    
    a+=7; // a = a+7
    printf("2nd value of a = %d\n", a);

    a-=3; // a = a-3
    printf("3rd value of a = %d\n", a);

    a*=2; // a = a*2
    printf("4th value of a = %d\n", a);

    a/=6; // a = a/6
    printf("5th value of a = %d\n", a);

    a%=3; // a = a%3
    printf("6th value of a = %d\n", a);

    return 0;
}
