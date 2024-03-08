#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
int main() {
    int Amount_Of_Sides;
    int Amount_Of_Dice;
    int Min_Ind_Die = 1;
    int roll = 0;
    int roll_total;
    cout << "Welcome to the Dice Statistics program!\n\n";

    cout << "How many dice are in your roll?\n";
    cin >> Amount_Of_Dice;

    cout << "How many sides are on the dice?\n";
    cin >> Amount_Of_Sides;

    int Max_Dice_Roll = Amount_Of_Dice * Amount_Of_Sides; // Calculating the Max Dice Roll

for (int Amount_Of_Rolls_Left = 0; Amount_Of_Rolls_Left < Amount_Of_Dice; Amount_Of_Rolls_Left++) {
    srand(time(0));
    roll = rand() % (Amount_Of_Sides - Min_Ind_Die + 1) + Min_Ind_Die;
}


    cout << "When you roll a " << Amount_Of_Dice << "d" << Amount_Of_Sides << ", your statistics will be:\n\n";

    cout << setw(10) << "Minimum: " << Amount_Of_Dice << endl;
    cout << setw(10) << "Average: " << (Amount_Of_Dice + Max_Dice_Roll) / 2 << endl;
    cout << setw(10) << "Maximum: " <<  Max_Dice_Roll << endl;
    cout << roll_total;

    return 0;
}
