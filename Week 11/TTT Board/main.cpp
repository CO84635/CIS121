#include <iostream>
//#include "TTT_Logic.h"

void game_board(char number[9]) {
    std::cout << "    " << number[0] << "  |  " << number[1] << "  |  " << number[2] << "\n" <<
              "  -----+-----+-----\n" <<
              "    " << number[3] << "  |  " << number[4] << "  |  " << number[5] << "\n" <<
              "  -----+-----+-----\n" <<
              "    " << number[6] << "  |  " << number[7] << "  |  " << number[8] << std::endl;
}

int main() {
    std::string mark_choice;
    std::cout << "Would you like to choose a mark?" << std::endl;
    getline(std::cin, mark_choice);
    if (mark_choice == "Yes" ) {
        std::cout << "What is the player one mark?" << std::endl;
    } else {
        std::cout << "No alternate player mark selected" << std::endl;
    }


    char number[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

    game_board(number);

    int i = 9;
    int z = 0;
    while (i > 0) {
        char mark;
        std::string input;
        std::cout << "What is your move? " << std::endl;
        std::cin >> input;
        if (input == "exit") {
            std::cout << "Goodbye!" << std::endl;
            break;
        }
        int move = std::stoi(input);
        if (move >= 1 && move <= 9 && number[move - 1] != 'X' && number[move - 1] != 'O'){
            if (z % 2 == 0) {
                mark = 'X';
            } else {
                mark = 'O';
            }
            number[move - 1] = mark;
            game_board(number);
            --i;
            ++z;
        } else {
            std::cout << "This spot is already taken!" << std::endl;
        }
    }
    return 0;
}

