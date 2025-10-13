#include <iostream>

// My String Library
#include "clsString.h"

using namespace std;

int main()
{
    clsString String1;

    String1.Value = "Madi Abdelheq";

    cout << "Number of Capital Letter : ";
    cout << String1.CountCapitalLetter() << endl;

    cout << "Number of Capital Letter : ";
    cout << clsString::CountCapitalLetter("Hello World! I am a C++ Developer") << endl;

    return 0;
}