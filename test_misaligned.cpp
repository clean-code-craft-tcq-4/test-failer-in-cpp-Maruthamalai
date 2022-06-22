#include <iostream>
#include <assert.h>
#include "misaligned.hpp"

int main() {
    int result = printColorMap();

    assert(result == 25);
    assert(std::strcmp(printLine(0, 0), "1   |  White      |    Blue"));
    assert(std::strcmp(printLine(2, 0), "10  |  Red        |    Slate"));
    assert(std::strcmp(printLine(4, 0), "17  |  Yellow     |    Orange"));

    std::cout << "All is well (maybe!)\n";
    return 0;
}