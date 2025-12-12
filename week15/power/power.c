#include "power.h"

int power(int a, int b) {
    if (b==0) {
        return 1;
    }

    int result = 1;
    for(int i=0;i<b;i++) {
        result = result * a;
    }

    return result;
}