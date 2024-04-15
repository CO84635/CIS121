#include <iostream>
#include <cassert>

using namespace std;

string number_suffix(int num) {
    if (num <= 0) {
        return "";
    }
    if (num % 100 == 11 || num % 100 == 12 || num % 100 == 13) {
        return "th";
    }
    if (num % 10 == 1) {
        return "st";
    } else if (num % 10 == 2) {
        return "nd";
    } else if (num % 10 == 3) {
        return "rd";
    } else {
        return "th";
    }
}

int main() {
    assert(number_suffix(0) == "");
    assert(number_suffix(1) == "st");
    assert(number_suffix(2) == "nd");
    assert(number_suffix(4) == "th");
    assert(number_suffix(120) == "th");
    return 0;
}
