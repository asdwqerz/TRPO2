#include <iostream>
#include <cassert>
#include "func.h"

using namespace std;

int main() {

    cout << "Running tests..." << endl;

    assert(Plus(4, 3) == 7);
    assert(Plus(-5, 5) == 0);

    assert(Minus(5, 3) == 2);
    assert(Minus(0, 2) == -2);

    assert(Mult(2, 7) == 14);
    assert(Mult(-2, 4) == -8);

    assert(Div(12, 3) == 4);
    assert(Div(5, 2) == 2.5);

    cout << "All tests completed successfully." << endl;
    return 0;
}