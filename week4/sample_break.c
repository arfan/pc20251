#include<stdio.h>

int main(){
    int x;

    for(x=1; x<=10;x++) {
        if(x==5)
            break; //exit the loop

        printf("%d ", x);
    }
    return 0;
}
