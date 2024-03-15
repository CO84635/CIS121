#include <iostream>
#include <iomanip>
#include <ctime>
#include <sstream>
#include <string>
#include <cctype>

using namespace std;

int roll_dice(int amount_of_dice, int amount_of_sides) {
    int min_ind_die = 1;
    int roll_total = 0;
    for (int amount_of_rolls_left = 0; amount_of_rolls_left < amount_of_dice; amount_of_rolls_left++) {
        int roll = rand() % amount_of_sides + min_ind_die;
        roll_total += roll;
    }
    return roll_total;
}

int main() {
    int amount_of_sides,
        amount_of_dice,
        modifier = 0;
    string roll_input_string;

    cout << "Welcome to the Dice Statistics program!\n\n";

    cout << "What is your roll?\n";
    getline(cin, roll_input_string);

    stringstream ss(roll_input_string);
    char d, plus;
    ss >> amount_of_dice >> d >> amount_of_sides;

    while(isspace(ss.peek())) ss.get();

    if (ss.peek() == '+') {
        ss >> plus;
        while (isspace(ss.peek())) ss.get();
        ss >> modifier;
        }

    srand(time(0));

    double max = amount_of_sides * amount_of_dice + modifier;
    double min = amount_of_dice + modifier;
    double average = (min + max) / 2;
    int roll_total = roll_dice(amount_of_dice, amount_of_sides);
    if (modifier == 0) {
        cout << "\nWhen you roll a " << amount_of_dice << "d" << amount_of_sides << ", your statistics will be:\n";
    } else {
        cout << "\nWhen you roll a " << amount_of_dice << "d" << amount_of_sides << " + " << modifier
        << ", your statistics will be:\n";
    }
    cout << setw(20) << "Minimum: " << min << endl;
    cout << setw(20) << "Average: " << average << endl;
    cout << setw(20) << "Maximum: " << max << endl;
    if (amount_of_dice == 1 && roll_total == 20 && amount_of_sides == 20) {
        cout << "You rolled a Natural 20! Critical Success!" << endl;
    } else if (amount_of_dice && roll_total == 1 && amount_of_sides == 20) {
        cout << " You rolled Natural 1... Critical failure :(" << endl;
    } else {
        cout << "\nRolled: " << roll_total + modifier << endl;
    }

    cout << "Thank you for using the Dice Statistics Program! ";
    return 0;
}