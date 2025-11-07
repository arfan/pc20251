#include<stdio.h>

struct baby {
    char *name;
    float height;
    float weight;  
};

typedef struct baby *babyPtr;

void printBaby(struct baby b) {
    printf("baby name %s\n", b.name);
    printf("baby height %f\n", b.height);
    printf("baby weight %f\n", b.weight);
}

void addHeight(babyPtr b) {
    b->height += 2;
}

int main() {
    struct baby arfan;
    arfan.name = "Arfan";
    arfan.height = 12.5;
    arfan.weight = 25.7;

    printBaby(arfan);

    addHeight(&arfan);
    addHeight(&arfan);

    printBaby(arfan);

    return 0;
}