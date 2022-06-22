#include <iostream>
#include <assert.h>
#include <iomanip>

int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            std::cout << std::setw(4) << i * 5 + j << std::setw(8) << " | " << majorColor[i] << std::setw(8) << " | " << minorColor[i] << "\n";
        }
    }
    return i * j;
}
