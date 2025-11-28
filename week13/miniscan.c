#include<stdio.h>
#include<ctype.h>
#include<string.h>

int get_total_digit(char *str) {
    int n = strlen(str);
    int total_digit =0;

    for(int i=0;i<n;i++) {
        if(isdigit(str[i])) {
            total_digit++;
        }
    }

    return total_digit;
}

int get_total_letter(char *str) {
    int n = strlen(str);
    int total_letter =0;

    for(int i=0;i<n;i++) {
        if(isalpha(str[i])) {
            total_letter++;
        }
    }

    return total_letter;
}

int main(int argc, char *argv[]) {
    int total_digit=0;
    int total_letter=0;

    for(int i=1;i<argc;i++) {
        total_digit += get_total_digit(argv[i]);
        total_letter += get_total_letter(argv[i]);
    }

    printf("total digit=%d\n", total_digit);
    printf("total letter=%d\n", total_letter);
}
