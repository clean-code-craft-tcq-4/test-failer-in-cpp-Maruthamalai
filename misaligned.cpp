#include <assert.h>

#include "misaligned.hpp"


std::string printLine(int majorColorIdx, int minorColorIdx)
{
    std::string str;
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

    str =  std::to_string(majorColorIdx * 5 + minorColorIdx ) + " | " + majorColor[majorColorIdx] + " | " + minorColor[majorColorIdx];
    
    return str;
}

int printColorMap() {

    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            std::cout << printLine(i, j)<< "\n";
        }
    }
    return i * j;
}
