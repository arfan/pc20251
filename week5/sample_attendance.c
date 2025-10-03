#include <stdio.h>

int main() {
    int present[7] = {1, 0, 1, 1, 1, 0, 1};
    int present_count=0;
    int absent_count=0;

    for (int i = 0; i < 7; i++) {
        if (present[i] == 1){
            printf("Day %d: Present\n", i+1);
            present_count++;
        }
        else {
            printf("Day %d: Absent\n", i+1);
            absent_count++;
        }
    }

    printf("present count=%d\n",present_count);
    printf("absent count=%d\n",absent_count);

    return 0;
}