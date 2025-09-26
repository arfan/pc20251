#include<stdio.h>

int main(){
    for (int i = 0, j = 0;  j + i <= 10; j++, i++)
    {
       printf( "i=%d, j=%d, j+i=%d\n",i,j, j + i );
    }
    return 0;
}
