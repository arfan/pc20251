#include<stdio.h>

int main() {
    int i = 2147483640; // max is 2147483647 
                        //if we keep ++ then the value of i will 
                        //overflow and become negative

    while(i>0) {
        printf("i=%d\n", i);
        i++;
    }
    printf("i=%d\n", i);
    return 0;
}