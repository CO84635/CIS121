#include <iostream>
#include <cmath>
void Sherical_To_Cartesian(double cordinateOne, double cordinateTwo, double cordinateThree) {
    double
}
int main() {
    std::cout << "Welcome to the point conversion program!" << std::endl;

    int cordinateType;
    std::cout << "\nDo you want to enter your cordinates in? \n(1) Spherical Cordinates \n(2) Cartesian Cordinates";
    std::cin >> cordinateType;

    double cordinateOne, cordinateTwo, cordinateThree;
    std::cout << "Enter your cordinates, seperated by spaces: " << std::endl;
    std::cin >> cordinateOne >> cordinateTwo >> cordinateThree;

    std::cout << "Your point as follows. Angles are in radians. \n" << std::endl;

    if (cordinateType == 1) {
        CartesianConversion(cordinateOne, cordinateTwo, cordinateThree);
    }


    return 0;
}
