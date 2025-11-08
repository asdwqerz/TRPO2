#include <iostream>
#include <locale.h>
#include "func.h"

using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");

    int a = 10, b = 20;

    cout << "Сумма: " << plus(a, b) << endl;
    cout << "Разность: = " << minus(a, b) << endl;
    cout << "Умножение: = " << mult(a, b) << endl;
    cout << "Деление: " << div(a, b) << endl;

    return 0;
}