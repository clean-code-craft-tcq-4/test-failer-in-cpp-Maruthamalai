#include <iostream>
#include <assert.h>
#include "misaligned.hpp"

int main() {
    int result = printColorMap();

    assert(result == 25);
    assert(printLine(0, 0).compare("1   |  White      |    Blue"));
    assert(printLine(2, 0).compare("10  |  Red        |    Slate"));
    assert(printLine(4, 0).compare("17  |  Yellow     |    Orange"));

    std::cout << "All is well (maybe!)\n";
    return 0;
}