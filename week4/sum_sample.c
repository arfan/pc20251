#include<stdio.h>

int main(){
    int sum = 0, number;

    // sum = 2 + 4 + 6 + ..... + 98 + 100
    for(number=2; number <= 100;number+=2) {
        printf("number=%d, sum=%d\n", number, sum);
        sum += number;
    }
    printf("Sum is %d\n", sum);
    return 0;
}