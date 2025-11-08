#include <iostream>
#include <locale.h>
#include "func.h"

using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");

    int a = 10, b = 20;

    cout << "Сумма: " << Plus(a, b) << endl;
    cout << "Разность: = " << Minus(a, b) << endl;
    cout << "Умножение: = " << Mult(a, b) << endl;
    cout << "Деление: " << Div(a, b) << endl;

    return 0;
}