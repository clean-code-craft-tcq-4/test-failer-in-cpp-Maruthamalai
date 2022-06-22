#include <iostream>
#include <assert.h>
#include "misaligned.hpp"

int main() {
    int result = printColorMap();

    assert(result == 25);
    assert(printLine(0, 0).compare("1   |  White      |    Blue")  == 0);
    assert(printLine(2, 0).compare("10  |  Red        |    Slate") == 0);
    assert(printLine(4, 0).compare("17  |  Yellow     |    Orange") == 0);

    std::cout << "All is well (maybe!)\n";
    return 0;
}