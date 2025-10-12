#include <stdio.h>
#include <string.h>

int main()
{
    char name[100][50];  // 100 strings of 50 characters each
    float weight[100];
    float height[100];
    
    // Initialize all strings to empty
    for(int i = 0; i < 100; i++) {
        strcpy(name[i], "");
    }
    
    // Set some example values
    strcpy(name[0], "budi");
    strcpy(name[1], "anita");
    strcpy(name[2], "charlie");
    
    // Set corresponding weights and heights
    weight[0] = 70.5;
    height[0] = 175.0;
    weight[1] = 55.2;
    height[1] = 160.0;
    weight[2] = 80.3;
    height[2] = 180.5;

    int count = 3; //how many data available
    
    printf("Names in the array:\n");
    for(int i = 0; i < count; i++) {
        printf("Person %d: %s (Weight: %.1f kg, Height: %.1f cm)\n", 
                i+1, name[i], weight[i], height[i]);
    
    }
    
    return 0;
}