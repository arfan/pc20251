#include <stdio.h>
#include <string.h>

struct Person {
    int age; // integer is 4 bytes
    char name[20]; // each char need 1 byte total 20 bytes
};

int main() {
    // Writing to binary file
    struct Person p = {25, "John"};
    FILE *fp = fopen("data.bin", "wb");
    if (!fp) {
        printf("Cannot open file for writing!\n");
        return 1;
    }
    fwrite(&p, sizeof(struct Person), 1, fp);
    fclose(fp);
    printf("Struct written to data.bin\n");

    // Reading from binary file
    struct Person p2;
    fp = fopen("data.bin", "rb");
    if (!fp) {
        printf("Cannot open file for reading!\n");
        return 1;
    }
    fread(&p2, sizeof(struct Person), 1, fp);
    fclose(fp);
    printf("Read from file: Age: %d, Name: %s\n", p2.age, p2.name);

    return 0;
}
