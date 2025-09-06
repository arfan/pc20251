#include <stdio.h>

int main(){
    int N=0, Sum=0;

    printf("Input N: ");
    scanf("%d", &N);

    for(int i=1;i<=N;i++) {
        printf("i=%d\n", i);
        printf("sum=%d\n", Sum);
        
        Sum = Sum + i;
    }

    printf("The sum is %d", Sum);

    return 0;
}