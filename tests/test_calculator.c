#include <assert.h>
#include "../src/calculator.h"

int main() {
    assert(add(1, 1) == 2);
    assert(add(0, 1) == 1); 
    assert(subtract(5, 3) == 2);
    assert(multiply(2, 3) == 6);
    assert(divide(10, 2) == 5);
    assert(power(2, 3) == 8);
    assert(square_root(4) == 2);
    assert(modulus(10, 3) == 1);

    return 0;
}
