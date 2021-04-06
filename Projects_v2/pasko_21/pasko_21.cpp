// Links to read more:
// https://docs.microsoft.com/en-us/cpp/build/walkthrough-creating-and-using-a-dynamic-link-library-cpp?view=msvc-160
// https://aticleworld.com/how-to-create-and-use-dll-dynamic-link-library-in-c/
// https://www.youtube.com/watch?v=pLy69V2F_8M&ab_channel=TheCherno


#include <iostream>
#include "Calculation.h"

int main()
{
    CalculationApi obj;

    obj.Addition();

    obj.Subtraction();

    obj.Multiply();

    return 0;
}
