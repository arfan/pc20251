#include<stdio.h>

int main(){
    printf("hello this is a program\n");
    printf("a simple program\n");
    if(5>4){
        printf("5 is bigger than 4\n");        
    }
    for(int i=1;i<=5;i++){
        printf("i=%d\n", i);
        
        for(int j=1;j<=5;j++){
            printf("j=%d\n", j);
        }
        printf("\n");
    }
    

    return 0;
}