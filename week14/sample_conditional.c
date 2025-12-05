#include <stdio.h>

#define DEBUG 0

#if DEBUG
    #define LOG(x) printf("DEBUG: %s\n", x)
#else
    #define LOG(x)
#endif


int main() {
    LOG("sample");
    return 0;
}
