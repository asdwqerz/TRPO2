#include "func.h"

int Plus(int a, int b) {
    return a + b;
}

int Minus(int a, int b) {
    return a - b;
}

int Mult(int a, int b) {
    return a * b;
}

double Div(int a, int b) {
    if (b == 0)
        return 0;
    return static_cast<double>(a) / b;
}