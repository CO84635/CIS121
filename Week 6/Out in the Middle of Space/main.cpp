#include <iostream>
#include <cmath>

void Spherical_To_Cartesian(double &r, double &theta, double &phi) {
    double x = r * cos(theta) * sin(phi);
    double y = r * sin(theta) * sin(phi);
    double z = r * cos(phi);
    r = sqrt(x*x + y*y + z*z);
    theta = atan2(y, x);
    phi = acos(z/r);
}
void Cartesian_To_Spherical(double &x, double &y, double &z) {
    double r = sqrt(x*x + y*y + z*z);
    double theta = atan2(y, x);
    double phi = acos(z/r);
    x = r * cos(theta) * sin(phi);
    y = r * sin(theta) * sin(phi);
    z = r * cos(phi);
}
int main() {
    std::cout << "Welcome to the point conversion program!" << std::endl;

    int coordinateType;
    std::cout << "\nDo you want to enter your coordinates in:\n"
                 << "(1) Spherical Coordinates\n"
                 << "(2) Cartesian Coordinates\n"
    << std::endl;
    std::cin >> coordinateType;

    double x, y, z, r, theta, phi;

    std::cout << "Enter your coordinates, seperated by spaces: " << std::endl;

    if (coordinateType == 1) {
        std::cin >> r >> theta >> phi;
        Spherical_To_Cartesian(r, theta, phi);
    } else if (coordinateType == 2){
        std::cin >> x >> y >> z;
        Cartesian_To_Spherical(x, y, z);
    } else {
        std::cerr << "Incorrect Selection! Please choose either 1 or 2!";
        return 1;
    }

    std::cout << "Your point as follows. Angles are in radians. \n" << std::endl;
    std::cout << "Spherical Coordinates: (" << r << ", " << theta << ", " << phi << ")." << std::endl;
    std::cout << "Cartesian Coordinates: (" << x << ", " << y << ", " << z << ")." << std::endl;

    std::cout << "Thank you for using the Point Conversion Program! << endl;" << std::endl;

    return 0;
}
