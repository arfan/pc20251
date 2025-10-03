#include <stdio.h>

int main() {
    int choice;
    do {
        printf("--------\n1. Deposit\n2. Withdraw\n3. Exit\n");
        scanf("%d" , &choice);
        
        if(choice==1) {
            printf("you are depositting money\n");
        } else if (choice==2) {
            printf("you are withdrawing money\n");
        }

    } while (choice != 3);

    return 0;
}