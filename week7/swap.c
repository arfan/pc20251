#include<stdio.h>

void printArr(int arr[], int element) {
    for (int i=0;i<element;i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swapElement(int arr[], int a, int b) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

int main( ) {
    int a = 10;
    int b = 20;

    printf("a=%d, b=%d\n", a, b);

    int temp = a;
    a = b;
    b = temp;

    printf("a=%d, b=%d\n", a, b);

    int arr[] = {1, 2, 3};
    printArr(arr, 3);

    // int hold = arr[0];
    // arr[0] = arr[1];
    // arr[1] = hold;
    swapElement(arr, 0, 1);

    printArr(arr, 3);
}