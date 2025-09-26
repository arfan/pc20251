#include<stdio.h>

int main() {
    char grade = 'B';

    switch(grade) {
        case 'A':
            printf("the grade is Very Good\n");
            break;
        case 'B':
            printf("the grade is Good\n");
            break;
        case 'C':
            printf("the grade is Enough\n");
            break;
        default:
            printf("the grade is undefined\n");
            break;
    }
}