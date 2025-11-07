#include <stdio.h>

int main()
{
    int count1, count2, count3;

    /* Example 1: Basic usage */
    printf("Hello%n World\n", &count1);
    printf("Characters before %%n: %d\n\n", count1);

    // /* Example 2: Multiple %n in one printf */
    // printf("ABC%nDEF%nGHI%n\n", &count1, &count2, &count3);
    // printf("Position 1: %d, Position 2: %d, Position 3: %d\n\n", count1, count2, count3);

    // /* Example 3: Using %n for alignment */
    // printf("Name: John Doe%n", &count1);
    // printf("%*sAge: 25\n", 20 - count1, "");
    
    // printf("Name: Jane%n", &count1);
    // printf("%*sAge: 30\n\n", 20 - count1, "");

    // /* Example 4: Tracking formatted output length */
    // int num = 12345;
    // printf("Number: %d%n (length: ", num, &count1);
    // printf("%d digits)\n", count1 - 8);  /* subtract "Number: " */

    return 0;
}
