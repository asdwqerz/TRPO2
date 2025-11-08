#include "func.h"

int plus(int a, int b) {
    return a + b;
}

int minus(int a, int b) {
    return a - b;
}

int mult(int a, int b) {
    return a * b;
}

double div(int a, int b) {
    if (b == 0)
        return 0;
    return static_cast<double>(a) / b;
}