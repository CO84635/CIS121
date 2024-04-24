#include <iostream>
void game_board(char number[9]) {
    std::cout << "    " << number[0] << "  |  " << number[1] << "  |  " << number[2] << "\n" <<
              "  -----+-----+-----\n" <<
              "    " << number[3] << "  |  " << number[4] << "  |  " << number[5] << "\n" <<
              "  -----+-----+-----\n" <<
              "    " << number[6] << "  |  " << number[7] << "  |  " << number[8] << std::endl;
}

int main() {
    char number[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

    game_board(number);

    int i = 9;
    while (i > 0) {
        std::string input;
        std::cout << "What is your move? " << std::endl;
        std::cin >> input;
        if (input == "exit") {
            std::cout << "Goodbye!" << std::endl;
            break;
        }
        int move = std::stoi(input);
        if (move >= 1 && move <= 9 && (number[move - 1] != 'X')){
            number[move - 1] = 'X';
            game_board(number);
            --i;
        }
    }
    return 0;
}

