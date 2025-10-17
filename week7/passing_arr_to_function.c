#include<stdio.h>


void modifyArr(int arr[], int element) {
    for (int i=0;i<element;i++) {
        arr[i] = arr[i] * 2;
    }
}

void printArr(int arr[], int element) {
    for (int i=0;i<element;i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int a[] = {1, 2, 3, 4, 5};

    printArr(a, 5);
    
    modifyArr(a, 5);
    
    printArr(a, 5);
    return 0;
}