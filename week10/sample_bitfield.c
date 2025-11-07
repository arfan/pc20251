#include <stdio.h>

struct BitCard {
    unsigned face : 4;
    unsigned suit : 2;
    unsigned color : 1;
};

int main() {
    struct BitCard bc;

    bc.face = 10;
    bc.suit = 5; //101
    bc.color = 1;

    printf("bc.face: %d\n", bc.face);
    printf("bc.suit: %d\n", bc.suit);
    printf("bc.color: %d\n", bc.color);
    return 0;
}