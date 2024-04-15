#include <iostream>
//Audrey, Owen & Brandon 3/4/2024
using namespace std;
int main() {

    int a, //Main prompt
        b, // First Prompt
        c, // Second Prompt
        d; // Third Prompt

    cout << "You are in CSC and you see an orange on the floor. \n"; // Main prompt
    cout << "1. You walk past the orange to your seat.\n";
    cout << "2. You pick up the orange off of the ground.\n";
    cout << "3. Just leave the room.\n";
    cin >> a;

    if (a == 1) {
        cout << "Sitting in your seat, you try to solve why the orange was there...\n"; // First prompt
        cout << "1. Get up and question Cyrus about the orange's existence.\n";
        cout << "2. Create a program about the orange's existence.\n";
        cout << "3. Ignore it. It's just an orange.\n";
        cin >> b;
        if (b == 1) {
            cout << "Cyrus replied 'Never ask questions you don't want to know the answers to.'";
        } else if (b == 2) {
            cout << "You start the program and it prints 'You are in CSC and you see an orange on the floor.'";
        } else {
            cout << "You start hearing whispers from the orange. Its calling your name...";
        }
    } else if (a == 2) {
        cout << "Holding the orange in your hand. You do what? \n"; // Second prompt
        cout << "1. You throw the orange at Cyrus\n";
        cout << "2. Take a bite of the orange... with the skin.\n";
        cout << "3. Take it home.\n";
        cin >> c;
        if (c == 1) {
            cout << "You just assaulted Cyrus? What is wrong with you?";
        } else if (c == 2) {
            cout << "It taste like a normal orange. Just odd because you at it with skin.";
        } else {
            cout << "Orange just sits there. Not moving because it is just an orange.";
        }
    } else if (a == 3) { // Third Prompt
        cout << "You have left the class room. \n";
        cout << "1. Go to the vending machine.\n";
        cout << "2. Go over to your friend at a table.\n";
        cout << "3. Return back to classroom.\n";
        cin >> c;
        if (c == 1) {
            cout << "The vending machine looks promising at first, but there was only oranges.";
        } else if (c == 2) {
            cout << "You sit down, your friend says, 'Hey by any chance have you seen my orange?'.";
        } else {
            cout << "The orange is missing? Moving closer to your seat you see the orange resting on it. As if its always been there.";
        }
    }

    return 0;
}
