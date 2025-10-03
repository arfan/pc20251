#include <stdio.h>

int main() {    
    
    int matrix[2][3] = { {1, 2, 3},   {4, 5, 6} };
                       // element 0   //element 1   

    printf("element[0][0]=%d\n",matrix[0][0]);
    printf("element[0][1]=%d\n",matrix[0][1]);
    printf("element[0][2]=%d\n",matrix[0][2]);


    printf("element[1][0]=%d\n",matrix[1][0]);
    printf("element[1][1]=%d\n",matrix[1][1]);
    printf("element[1][2]=%d\n",matrix[1][2]);

    return 0;
}