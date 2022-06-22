#include <iostream>
#include <assert.h>
#include "misaligned.hpp"

int main() {
    int result = printColorMap();

    assert(result == 25);
    std::cout << "All is well (maybe!)\n";
    return 0;
}