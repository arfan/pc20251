#include<stdio.h>

int main(){
    int counter = 15;          // initialization
    while ( counter < 10 ) {     // repetition condition
        printf( "%d\n", counter );
        ++counter;             // increment
    }

    return 0;
}