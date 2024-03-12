#include <iostream>
#include <ctime>

using namespace std;

int main() {
    cout << "Welcome to the Rock Paper Scissor game.\n";
    int i = 0;
    while (i == 0) {
        cout << "Would you like the AI to be fair or rigged?\n 1. Fair Computer \n 2. Rigged Computer\n";
        int input_1;
        cin >> input_1;
        srand(time(0));
        if (input_1 == 1) {
            int ai_random_number = rand() % 3 + 1;
            cout << "Which would you like to select?\n 1. Rock \n 2. Paper \n 3. Scissors\n";
            int input_2;
            cin >> input_2;
//       cout << ai_random_number;
            if (input_2 == 1) {
                if (ai_random_number == 3) {
                    cout << "You won against the AI! It selected Scissors & you selected rock.\n";
                } else if (ai_random_number == 1) {
                    cout << "You tied against the AI! It selected Rock & you selected rock.\n";
                } else {
                    cout << "You lost against the AI! It selected Paper & you selected rock.\n";
                }
            } else if (input_2 == 2) {
                if (ai_random_number == 1) {
                    cout << "You won against the AI! It selected Rock & you selected paper.\n";
                } else if (ai_random_number == 2) {
                    cout << "You tied against the AI! It selected Paper & you selected paper.\n";
                } else {
                    cout << "You lost against the AI! It selected Scissors & you selected paper.\n";
                }
            } else if (input_2 == 3) {
                if (ai_random_number == 2) {
                    cout << "You won against the AI! It selected Paper & you selected Scissors.\n";
                } else if (ai_random_number == 3) {
                    cout << "You tied against the AI! It selected Scissors & you selected Scissors.\n";
                } else {
                    cout << "You lost against the AI! It selected Rock & you selected Scissors.\n";
                }
            } else {
                cout << "You have not selected a proper answer. Please try again.";
            }

        } else if (input_1 == 2) {
            cout << "Which would you like to select?\n 1. Rock \n 2. Paper \n 3. Scissors\n";
            int input_2;
            cin >> input_2;
            switch (input_2) {
                case 1:
                    cout << "You Lost! AI had selected Paper!";
                    break;
                case 2:
                    cout << "You Lost! AI had selected Scissors!";
                    break;
                case 3:
                    cout << "You lost! AI had selected Rock!";
                    break;
                default:
                    cout << "Incorrect input! Play again to test your skill...";
            }

        } else {
                cout << "Invalid input! Please select 1 or 2.\n";
                continue;
            }

        }
        cout << "Would you like to play the game again or exit? 0. Continue 1. Exit\n";
        cin >> i;
    }


    return 0;
}
