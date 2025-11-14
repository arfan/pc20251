#include<stdio.h>

int main()
{
    int a[] = {1, 2, 3, 4};

    int *vPtr = &a[0];

    printf("a[0]=%d\n", a[0]);
    printf("*vPtr=%d\n", *vPtr);
    printf("vPtr=%p\n", vPtr);
    printf("vPtr+1=%p\n", vPtr+1);
    printf("*(vPtr+1)=%d\n", *(vPtr+1));
    

    // a[0] == *(vPtr+0)
    // a[1] == *(vPtr+1)
    // a[2] == *(vPtr+2)
    printf("a[0]=%d, *(vPtr+0)=%d\n", a[0], *(vPtr+0));
    printf("a[1]=%d, *(vPtr+1)=%d\n", a[1], *(vPtr+1));
    printf("a[2]=%d, *(vPtr+2)=%d\n", a[2], *(vPtr+2));
    printf("a[3]=%d, *(vPtr+3)=%d\n", a[3], *(vPtr+3));
    
    printf("sizeof(int)=%d\n", sizeof(int));

    printf("vPtr=%p\n", vPtr);
    printf("vPtr+1=%p\n", vPtr+1);
    printf("vPtr+2=%p\n", vPtr+2);
    printf("vPtr+3=%p\n", vPtr+3);
    
    return 0;
}