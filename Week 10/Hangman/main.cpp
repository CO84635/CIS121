#include <iostream>
#include <string>

 std::string current_status(std::string word) {
    std::string status_word = "";
    int i = word.length();
    while (i > 0) {
        status_word += "_";
        i--;
    }
    return status_word;
}

// Owen & Brandon;
using namespace std;
int main() {
    int tries = 10;
    cout << "Welcome to Hangman!" << endl;

    string player_one_input;
    cout << "Player one! Enter a word: ";
    cin >> player_one_input;

    int length = player_one_input.length();
    cout << "Player two! Guess a word with " << length << " letters: " << endl;

    char guess[length];

    while(tries > 0) {
        cout << "What is your guess?: " << endl;
        cin >> guess[tries - 1];
        tries--;
        cout << "You have " << tries << " guesses remaining." << endl;
        cout << "Your current status: " << current_status(player_one_input) << endl;
    }

    return 0;
}
