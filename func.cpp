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

double Pow(int a, int b) {
    if (b == 0) return 1;

    double result = 1;

    int exp = b;
    if (b < 0) {
        exp = -b;
    }

    for (int i = 0; i < exp; i++) {
        result *= a;
    }

    if (b < 0) {
        return 1 / result;
    }

    return result;
}

int Mod(int a, int b) {
    if (b == 0)
        return 0;
    return a % b;
}