#include <assert.h>
#include <iomanip>
#include "misaligned.hpp"
using namespace std;

std::string printLine(int majorColorIdx, int minorColorIdx)
{
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

    std::ostringstream a;
    a<<left<<setw(4)<<(majorColorIdx * 5 + minorColorIdx ) << " | " <<left<<setw(10)<< majorColor[majorColorIdx] << " | " << minorColor[minorColorIdx]<<"\0";
    return a.str();
}

int printColorMap() {

    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            std::cout << printLine(i, j)<<endl;
        }
    }
    return i * j;
}
