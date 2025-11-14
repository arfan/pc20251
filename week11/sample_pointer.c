#include <stdio.h>

int main(){
    int y = 5;
    int *yPtr = &y;

    printf("y=%d\n", y);
    printf("yPtr=%p\n", yPtr);

    printf("operator * of yPtr=%d\n", *yPtr);
    
    return 0;
}