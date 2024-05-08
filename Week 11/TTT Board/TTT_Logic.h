//
// Created by Space on 5/6/2024.
//

#ifndef TTT_BOARD_TTT_LOGIC_H
#define TTT_BOARD_TTT_LOGIC_H

void game_board(char number[9]) {
    std::cout << "    " << number[0] << "  |  " << number[1] << "  |  " << number[2] << "\n" <<
              "  -----+-----+-----\n" <<
              "    " << number[3] << "  |  " << number[4] << "  |  " << number[5] << "\n" <<
              "  -----+-----+-----\n" <<
              "    " << number[6] << "  |  " << number[7] << "  |  " << number[8] << std::endl;
}


char number[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

void game_logic()

#endif //TTT_BOARD_TTT_LOGIC_H
