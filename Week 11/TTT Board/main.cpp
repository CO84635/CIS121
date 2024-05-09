#include <iostream>

void game_board(std::string number[9]) {
    std::cout << "    " << number[0] << "  |  " << number[1] << "  |  " << number[2] << "\n" <<
              "  -----+-----+-----\n" <<
              "    " << number[3] << "  |  " << number[4] << "  |  " << number[5] << "\n" <<
              "  -----+-----+-----\n" <<
              "    " << number[6] << "  |  " << number[7] << "  |  " << number[8] << std::endl;
}

int main() {
    std::string number[9] = {"1", "2", "3", "4", "5", "6", "7", "8", "9"};

    int i = 9;
    int z = 0;
    std::string player_one_mark = "X";
    std::string player_two_mark = "O";

    while (i > 0) {
        std::string mark_choice;
        std::cout << "Would you like to choose a mark?" << std::endl;
        getline(std::cin, mark_choice);

        if (mark_choice == "Yes" || mark_choice == "yes" || mark_choice == "Y" || mark_choice == "y") {
            bool player_one_mark_length_format = false;
            while(!player_one_mark_length_format) {
                std::cout << "What is player one's mark?" << std::endl;
                std::cin >> player_one_mark;
                if (player_one_mark.size() == 1) {
                    player_one_mark_length_format = true;
                } else {
                    std::cout << "Incorrect Length!" << std::endl;
                }
            }

            bool player_two_mark_length_format = false;
            while(!player_two_mark_length_format) {
                std::cout << "What is player two's mark?" << std::endl;
                std::cin >> player_two_mark;
                if (player_two_mark.size() == 1) {
                    player_two_mark_length_format = true;
                } else {
                    std::cout << "Incorrect Length!" << std::endl;
                }
            }

        } else if (mark_choice == "exit" || mark_choice == "Exit" || mark_choice == "E" || mark_choice == "e") {
            break;
        } else {
            std::cout << "No alternate player marks selected\n" << std::endl;
        }

        std::string input;
        game_board(number);
        std::cout << "\nWhat is your move? " << std::endl;
        std::cin >> input;
        if (input == "exit" || input == "Exit" || input == "E" || input == "e") {
            break;
        }
        int move = std::stoi(input);
        if (move >= 1 && move <= 9 && number[move - 1] != player_one_mark && number[move - 1] != player_two_mark){
            if (z % 2 == 0) {
                number[move - 1] = player_one_mark;
            } else {
                number[move - 1] = player_two_mark;
            }
            --i;
            ++z;
        } else {
            std::cout << "This spot is invalid!" << std::endl;
        }
        game_board(number);
    }
    std::cout << "\nThank you for playing my Tic-Tac-Toe program!";
    return 0;
}

