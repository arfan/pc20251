#include<stdio.h>

void printArr(int arr[], int element) {
    for (int i=0;i<element;i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSort( int a[], int element )
{
    int pass, j, hold;

    for ( pass = 1; pass <= element - 1; pass++ )
    {
        printf("pass=%d\n", pass);
        // int swap = 0;
        for ( j = 0; j <= element - 2; j++ )
        {
            if ( a[ j ] > a[ j + 1 ] ) {
                hold = a[ j ];
                a[ j ] = a[ j + 1 ];
                a[ j + 1 ] = hold;

                // swap = 1;
            }
        }
        // if(swap == 0) {
        //     break;
        // }
    }
}

int main() {
    int a[] = {1, 2,3, 4, 5, 6, 7, 8};

    printArr(a, 8);

    bubbleSort(a, 8);

    printArr(a, 8);

    return 0;
}