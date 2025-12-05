#include<stdio.h>
#define LOG(fmt, ...) printf(fmt, __VA_ARGS__)

int main() {

    LOG("value = %d", 12);
    
    return 0;
}