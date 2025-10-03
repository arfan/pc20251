#include<stdio.h>

int main() {
    //                0   1   2    3   4   
    int scores[5] = {90, 85, 70, 100, 95};

    scores[0] = 212;

    printf("element 0: %d\n", scores[0]);
    // printf("element 4: %d\n", scores[4]);


    return 0;
}