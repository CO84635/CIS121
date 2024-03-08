#include <iostream>
// Boris, Neal, Owen
using namespace std;
void ascii_plot(int length, int width, int x, int y) {
    cout << "^" << endl;
    for (int i = 0; i < length; i++) {
        cout << "|" << endl;
        for (i = 0; i < x; i++) {
            cout << " ";
        }
        cout << "X";
    }
    cout << "+ ";
    for (int i = 0; i < width; i++) {
        cout << "- ";
    }
    cout << ">";
}

int main() {
    ascii_plot(8,8,3,4);

    return 0;
}

// Instructions
//
// Write a function that prints a 2D plot to the console.
//
// The function should take four arguments:
//   1. The maximum value on the x-axis
//   2. The maximum value on the y-axis
//   3. The x-coordinate of the point to plot
//   4. The y-coordinate of the point to plot
//
// The output of your function should look something like this: (Ignore the // characters)

// ascii_plot(4, 4, 4, 4)

// ^
// |       X
// |
// |
// |
// + - - - - >

// ascii_plot(12, 6, 4, 4)

// ^
// |
// |
// |       X
// |
// |
// |
// + - - - - - - - - - - - - >

// ascii_plot(5, 5, 4, 0)

// ^
// |
// |
// |
// |
// |
// + - - - X - >

// ascii_plot(5, 5, 0, 4)

// ^
// |
// X
// |
// |
// |
// + - - - - - >

// ascii_plot(5, 5, 0, 0)

// ^
// |
// |
// |
// |
// |
// X - - - - - >

// ascii_plot(4, 4, 5, 5)

// ^
// |
// |
// |
// |
// + - - - - >

// Bonus participation point! Add a fifth argument to the function
// that takes in the character that the user wants to plot. It should
// default to 'X' so that the existing behavior does not change.

// ascii_plot(4, 4, 4, 4)

// ^
// |       X
// |
// |
// |
// + - - - - >

// ascii_plot(4, 4, 4, 4, 'X')

// ^
// |       X
// |
// |
// |
// + - - - - >

// ascii_plot(4, 4, 4, 4, '*')

// ^
// |       *
// |
// |
// |
// + - - - - >
