#include <iostream>
#include <cmath>

int main() {
    std::cout << "\n\tWelcome to the 2D distance program!\n\n";

    double x1, y1;
    std::cout << "What is the first point of the plane? (Ex: 12.01 16.81) *Space Between*\n";
    std::cin >> x1 >> y1;

    double x2, y2;
    std::cout << "What is the second point of the plane? (Ex: 12.01 16.81) *Space Between*\n";
    std::cin >> x2 >> y2;

    std::cout << "Calculating the distance now...\n\n";

    double Distance = std::sqrt(std::pow((x2-x1), 2) + std::pow((y2-y1),2));

    std::cout << "The distance from the points (" << x1 << ", " << y1 << ") and (" << x2 << ", " << y2 << ") is "
    << Distance << ".\n\n";
    std::cout << "Thank you for using the 2D Distance Program.";

    return 0;
}
