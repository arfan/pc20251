#include <stdio.h>

int main() {
    char ch;
    printf("Enter characters, q to quit:\n");
    scanf(" %c", &ch);
    while (ch != 'q') {
        printf("You entered: %c\n", ch);
        scanf(" %c", &ch);
    }
    return 0;
}