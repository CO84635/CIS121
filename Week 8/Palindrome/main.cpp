#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>
using namespace std;

bool is_palindrome(string word) {
    transform(word.begin(), word.end(), word.begin(), ::tolower);
    string reversed_word = word;
    reverse(reversed_word.begin(), reversed_word.end());
    return word == reversed_word;
}

int main() {
    assert(is_palindrome("Rotavator"));
    assert(is_palindrome("34743"));
    assert(is_palindrome("mom"));

    assert(!is_palindrome("Sam"));
    assert(!is_palindrome("orange"));
    assert(!is_palindrome("flower"));
    return 0;
}
