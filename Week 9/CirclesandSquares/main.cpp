#include <iostream>

const double PI = 3.14159265358979323846;

class Circle {
private:
    float radius;

public:
    Circle(float radius) {
        this->radius = radius;
    }

    float area() {
        return (PI * radius * radius);
    }
};

class Square {
private:
    float side_length;
public:
    Square(float side_length) {
        this->side_length = side_length;
    }

    float area()
    {
        return (side_length * side_length);
    }

};

using namespace std;

int main() {
    Circle circle_1(5);
    Square square_1(3);
    Square square_2(7);

    cout << "Area of the circle: " << circle_1.area() << endl;
    cout << "Area of the first square: " << square_1.area() << endl;
    cout << "Area of the second square: " << square_2.area() << endl;

    return 0;
}
