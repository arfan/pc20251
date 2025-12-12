#include "factorial.h"

int factorial(int x) {
    if(x==0 || x==1) {
        return 1;
    }

    return x * factorial(x-1);
}