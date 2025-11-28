#include <stdio.h>


int main() {
    FILE *fp = fopen("missing.txt", "r");
    if (!fp) { 
        perror("Cannot open file"); 
    }

    return 0;
}
