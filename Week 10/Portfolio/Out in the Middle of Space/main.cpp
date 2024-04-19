#include <iostream>
#include <cmath>

void Spherical_To_Cartesian(double &r, double &theta, double &phi, double &x, double &y, double &z) {
    x = r * cos(theta) * sin(phi);
    y = r * sin(theta) * sin(phi);
    z = r * cos(phi);
}
void Cartesian_To_Spherical(double &x, double &y, double &z, double &r, double &theta, double &phi) {
    r = sqrt(x*x + y*y + z*z);
    theta = atan2(y, x);
    phi = acos(z/r);
}

int main() {
    std::cout << "Welcome to the Point Conversion program!" << std::endl;

    bool done = false;
    double x, y, z, r, theta, phi;

    while(!done) {
        int coordinateType;
        std::cout << "\nDo you want to enter your coordinates in:\n"
                  << "(1) Spherical Coordinates\n"
                  << "(2) Cartesian Coordinates\n"
                  << std::endl;
        std::cin >> coordinateType;



        std::cout << "Enter your coordinates, seperated by spaces: " << std::endl;

        if (coordinateType == 1) {
            std::cin >> r >> theta >> phi;
            Spherical_To_Cartesian(r, theta, phi, x, y, z);
            done = true;
        } else if (coordinateType == 2) {
            std::cin >> x >> y >> z;
            Cartesian_To_Spherical(x, y, z, r, theta, phi);
            done = true;
        } else {
            std::cout << "Incorrect Selection! Please choose either 1 or 2!" << std::endl;
        }
    }

    std::cout << "Your point as follows. Angles are in radians. \n" << std::endl;
    std::cout << "Spherical Coordinates: (" << r << ", " << theta << ", " << phi << ")." << std::endl;
    std::cout << "Cartesian Coordinates: (" << x << ", " << y << ", " << z << ")." << std::endl;

    std::cout << "Thank you for using the Point Conversion Program!" << std::endl;

    return 0;
}
