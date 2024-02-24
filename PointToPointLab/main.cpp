#include <iostream>

int main() {
    std::cout << "Hello, Welcome to the 2D Midpoint Formula Calculator!\n" << std::endl;

    std::cout << "What is the first point on the plane? (Ex: 12.01 13.02) *Space Between each number!*\n";
    float x1, y1;
    std::cin >> x1 >> y1; // User entering first point

    std::cout << "What is the second point on the plane? (Ex: 16.02 14.02) *Space Between each number!*\n";
    float x2, y2;
    std::cin >> x2 >> y2; // User entering second point

    std::cout << "Calculating the Midpoint now...\n\n";

    double x3 = (x1 + x2) / 2; // Calculating the X midpoint output value
    double y3 = (y1 + y2) / 2; // Calculating the Y midpoint output value

    std::cout << "The midpoint of the line segment between (" << x1 <<", " << y1 << ") and (" << x2 <<", " << y2 <<
    ") is (" << x3 << ", " << y3 << ").\n\n";

    std::cout << "Thank you for using the 2D Midpoint formula Calculator! Have a good one!" << std::endl;
    return 0;
}
