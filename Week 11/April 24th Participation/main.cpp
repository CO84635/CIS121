#include <iostream>
#include <ctime>
#include <vector>
// Owen Ceresa and Brandon Thompson
// Welcome message
// Need to Track the Correct Chars & Wrong
// Generate a random char and add to the sequence
// ask the user if they are ready? and return 100 newlines
//ask user to enter the sequence
//check each char and output if correct or not
//output message

int main() {
    std::vector<char> sequence;
    std::vector<char> sequence_user_input;

    std::cout << "Welcome to Kim's Game!" << std::endl;

    std::string sequence_output;
    int i = 0;

    srand(time(0));
    while (i < 10) {
        char randChar = 33 + (rand() % 93);
        sequence.push_back(randChar);
        sequence_output += randChar;
        i++;
    }

    std::cout << sequence_output << std::endl;

    std::string choice;
    std::cout << "Do you want to recreate the sequence?" << std::endl;
    std::cin >> choice;

    std::string sequence_input;
    if (choice == "y" || choice == "yes" || choice == "Yes" || choice == "Y") {
        for (int i = 0; i < 100; ++i) {
            std::cout << std::endl;
        }
        std::cout << "Enter the sequence: " << std::endl;
        std::cin >> std::ws;
        std::getline(std::cin, sequence_input);
    }
    for (char c : sequence_input) {
        sequence_user_input.push_back(c);
    }

    for (int i = 0; i < sequence_input.length(); i++) {
        if (sequence_user_input.at(i) == sequence.at(i)) {
            std::cout << "Correct Char: " << sequence_user_input.at(i) << std::endl;
        } else {
            std::cout << "Wrong Char: " << sequence_user_input.at(i) << std::endl;
        }
    }

    std::cout << "Thank you for running Kim's game! " << std::endl;

    return 0;
}