#include "roman_and_arabic_converter.h"

int roman_to_arabic(const std::string &roman) {
    int result = 0;

    for (char c : roman) {
        switch (c) {
            case 'I':
                result += 1;
                break;
            case 'V':
                result += 5;
                break;
            case 'X':
                result += 10;
                break;
            case 'L':
                result += 50;
                break;
            case 'C':
                result += 100;
                break;
            case 'D':
                result += 500;
                break;
            case 'M':
                result += 1000;
                break;
            default:
                return -1;
        }
    }

    return result;
}

std::string arabic_to_roman(int num) {
    if (num <= 0) {
        return "";
    }

    std::string roman = "";
    while (num >= 1000) {
        roman += "M";
        num -= 1000;
    }

    if (num >= 900) {
        roman += "CM";
        num -= 900;
    } else if (num >= 500) {
        roman += "D";
        num -= 500;
    } else if (num >= 400) {
        roman += "CD";
        num -= 400;
    }

    while (num >= 100) {
        roman += "C";
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