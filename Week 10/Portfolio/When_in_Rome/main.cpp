#include <iostream>
#include <cassert>
#include "roman_arabic_functions.h"

using namespace std;

int main() {
    assert(arabic_to_roman(139) == "CXXXIX");
    assert(arabic_to_roman(0) == "");
    assert(arabic_to_roman(3999) == "MMMCMXCIX");
    assert(arabic_to_roman(7) == "VII");
    assert(arabic_to_roman(50) == "L");

    assert(roman_to_arabic("CXXXIX") == 139);
    assert(roman_to_arabic("") == 0);
    assert(roman_to_arabic("MMMCMXCIX") == 3999);
    assert(roman_to_arabic("VII") == 7);
    assert(roman_to_arabic("L") == 50);
}