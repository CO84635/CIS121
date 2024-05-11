#include <iostream>
#include <ctime>
#include <limits>

void gameBoard(std::string number[9]) {
    std::cout << "    " << number[0] << "  |  " << number[1] << "  |  " << number[2] << "\n" <<
              "  -----+-----+-----\n" <<
              "    " << number[3] << "  |  " << number[4] << "  |  " << number[5] << "\n" <<
              "  -----+-----+-----\n" <<
              "    " << number[6] << "  |  " << number[7] << "  |  " << number[8] << std::endl;
}

bool checkMarkLengthFormat(std::string& player_mark, const std::string& player_number) {
    std::cout << "What is the " << player_number << " player's mark?" << std::endl;
    std::cin >> player_mark;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    if (player_mark.size() == 1) {
        return true;
    } else {
        std::cout << "Incorrect Length!" << std::endl;
        return false;
    }
}

bool checkWin(const std::string number[9], const std::string &mark) {
    return ((number[0] == mark && number[1] == mark && number[2] == mark) ||
            (number[3] == mark && number[4] == mark && number[5] == mark) ||
            (number[6] == mark && number[7] == mark && number[8] == mark) ||
            (number[0] == mark && number[3] == mark && number[6] == mark) ||
            (number[1] == mark && number[4] == mark && number[7] == mark) ||
            (number[2] == mark && number[5] == mark && number[8] == mark) ||
            (number[0] == mark && number[4] == mark && number[8] == mark) ||
            (number[2] == mark && number[4] == mark && number[6] == mark));
}

int main() {
    std::string number[9] = {"1", "2", "3", "4", "5", "6", "7", "8", "9"};
    int remaining_moves = 9;

    std::string player_one_mark = "X";
    std::string player_two_mark = "O";

    std::string mark_choice;
    std::cout << "Would you like to choose a mark?" << std::endl;
    getline(std::cin, mark_choice);

    if (mark_choice == "Yes" || mark_choice == "yes" || mark_choice == "Y" || mark_choice == "y") {
        bool player_one_mark_length_format = false;
        while(!player_one_mark_length_format) {
            player_one_mark_length_format = checkMarkLengthFormat(player_one_mark, "1st");
        }

        bool player_two_mark_length_format = false;
        while(!player_two_mark_length_format) {
            player_two_mark_length_format = checkMarkLengthFormat(player_two_mark, "2nd");
        }

    } else if (mark_choice != "exit" || mark_choice != "Exit" || mark_choice != "E" || mark_choice != "e"){
        std::cout << "Default marks selected.\nPlayer one: X\nPlayer two: O\n" << std::endl;
    }

    srand(time(0));

    while (remaining_moves > 0) {
        std::cout << "Total Remaining moves: " << remaining_moves << std::endl;

        if (mark_choice == "exit" || mark_choice == "Exit" || mark_choice == "E" || mark_choice == "e") {
            break;
        }

        std::string input;
        gameBoard(number);
        std::cout << "\nWhat is your move? " << std::endl;
        std::cin >> input;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Having issues clearing buffer
        if (input == "exit" || input == "Exit" || input == "E" || input == "e") {
            break;
        }
        int move = std::stoi(input);
        if (move >= 1 && move <= 9 && number[move - 1] != player_one_mark && number[move - 1] != player_two_mark) {
            number[move - 1] = player_one_mark;
            -- remaining_moves;
            if(checkWin(number, player_one_mark)) {
                std::cout << "Player 1 wins!" << std::endl;
                gameBoard(number);
                break;
            }

            if (remaining_moves == 0) {
                break;
            }
        } else {
            std::cout << "This spot is invalid or already taken! Please Try again!" << std::endl;
            continue;
        }

        int ai_move;
        do {
            ai_move = rand() % 9;
        } while (number[ai_move] == player_one_mark || number[ai_move] == player_two_mark);
        std::cout << "AI has selected  " << ai_move + 1 << std::endl;
        number[ai_move] = player_two_mark;
        --remaining_moves;
        if (checkWin(number, player_two_mark)) {
            std::cout << "AI wins!" << std::endl;
            gameBoard(number);
            break;
        }
        if (remaining_moves == 0) {
            break;
        }
    }

    if (remaining_moves == 0 && !checkWin(number, player_one_mark) && !checkWin(number, player_two_mark)) {
        std::cout << "It's a draw!" << std::endl;
        gameBoard(number);
        return 0;
    }

    std::cout << "\nThank you for playing my Tic-Tac-Toe program!";
    return 0;
}
