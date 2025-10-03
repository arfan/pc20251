#include <stdio.h>

int main() {
    char ch;
    printf("Enter characters, q to quit:\n");
    
    do {
        scanf(" %c", &ch);
        printf("You entered: %c\n", ch);
    } while (ch != 'q');

    return 0;
}