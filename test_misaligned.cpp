#include <iostream>
#include <assert.h>
#include "misaligned.hpp"
#include <string>

int main() {
    int result = printColorMap();

    assert(result == 25);

    std::string expected = "0    | White      | Blue";
    std::string received = printLine(0, 0);
    assert(expected.compare(received)== 0);

    expected = "10   | Black      | Blue";
    received = printLine(2, 0);
    assert(expected.compare(received)== 0);
    
    expected = "20   | Violet     | Blue";
    received = printLine(4, 0);
    assert(expected.compare(received)== 0);   

    std::cout << "All is well (maybe!)\n";
    return 0;
}


