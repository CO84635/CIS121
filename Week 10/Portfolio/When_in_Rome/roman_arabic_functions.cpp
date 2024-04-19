#include "roman_arabic_functions.h"

std::string arabic_to_roman(int num) {
    std::string roman = "";
    if (num <= 0) {
        return "";
    }
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

int roman_to_arabic(std::string roman) {
    int number = 0;
    for (size_t i = 0; i < roman.size(); ++i) {
        if (roman[i] == 'M') {
            number += 1000;
        } else if (roman[i] == 'D') {
            number += 500;
        } else if (roman[i] == 'C') {
            if (i < roman.size() - 1 && (roman[i + 1] == 'D' || roman[i + 1] == 'M')) {
                number -= 100;
            } else {
                number += 100;
            }
        } else if (roman[i] == 'L') {
            number += 50;
        } else if (roman[i] == 'X') {
            if (i < roman.size() - 1 && (roman[i + 1] == 'L' || roman[i + 1] == 'C')) {
                number -= 10;
            } else {
                number += 10;
            }
        } else if (roman[i] == 'V') {
            number += 5;
        } else if (roman[i] == 'I') {
            if (i < roman.size() - 1 && (roman[i + 1] == 'V' || roman[i + 1] == 'X')) {
                number -= 1;
            } else {
                number += 1;
            }
        }
    }
    return number;
}