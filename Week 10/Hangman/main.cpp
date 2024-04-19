#include <iostream>
#include <array>
#include <string>

// Owen & Audrey
using namespace std;
int main() {
    int turns = 7;
    char guess[turns];

    std::cout << "Welcome to Hangman!" << std::endl;

    std::string player_one_input;
    std::cout << "Player one! Enter a word: ";
    std::cin >> player_one_input;
    char word[player_one_input.length()];

    std::cout << "Player two! Guess a word with " << player_one_input.length() << " letters: " << endl;

    while (turns > 0) {
        std::cout << "Player two! What is your guess? ";
        cin >> guess;
        std::cout << "You are wrong!" << endl;
        turns--;
    }
    for(int i = 0; i < player_one_input.length(); i++) {
        word[player_one_input.at(i)];
        std::cout << word[i];
    }




    return 0;
}
