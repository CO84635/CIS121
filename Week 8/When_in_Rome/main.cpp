#include <iostream>
#include <cassert>

using namespace std;

string arabic_to_roman(int num) {
    string roman = "";
    while (num >= 1000) {
        roman += "M";
        num -= 1000;
    }
    if (num >= 900) {
        roman += "CM";
        num -= 900;
    } else if (num >= 500) {
        roman += "D";
        num -= 500;I
    } else if (num >= 400) {
        roman += "CD";
        num -= 400;
    }
    while (num >= 100) {
        roman += "X";
        num -= 100;
    }
    if (num >= 90) {
        roman += "XC";
        num -= 90;
    } else if (num >= 50) {
        roman += "L";
        num -= 50;
    } else if (num >= 40) {
        roman += "XL";
        num -= 40;
    }
    while (num >= 10) {
        roman += "X";
        num -= 10;
    }
    if (num >= 9) {
        roman += "IX";
        num -= 9;
    } else if (num >= 5) {
        roman += "V";
        num -= 5;
    } else if (num >= 4) {
        roman += "IV";
        num -= 4;
    }
    while (num >= 1) {
        roman += "I";
        num -= 1;
    }
    return roman;
}
int main() {
    assert(arabic_to_roman(-12) == "");
    assert(arabic_to_roman(0) == "");
    assert(arabic_to_roman(3999) == "MMMCMXCIX");
    assert(arabic_to_roman(7) == "VII");
    assert(arabic_to_roman(50) == "L");
}
