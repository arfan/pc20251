#include<stdio.h>

int main() {

    struct baby {
        char *name;
        float height;
        float weight;  
    };

    struct baby *arfan;
    arfan->name = "Arfan";
    arfan->height = 12.5;
    arfan->weight = 25.7;

    printf("baby name %s\n", arfan->name);
    printf("baby height %f\n", arfan->height);
    printf("baby weight %f\n", arfan->weight);

    return 0;
}