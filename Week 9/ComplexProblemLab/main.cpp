#include <iostream>
#include <iomanip>

using namespace std;

class ComplexNumber {
private:
    float real;
    float imaginary;
public:
    ComplexNumber(float real, float imaginary) {
        this-> imaginary = imaginary;
        this-> real = real;
    }

    ComplexNumber add(const ComplexNumber number_two) const{ //Same with up here?
        return ComplexNumber(real + number_two.real, imaginary + number_two.imaginary);
    }

    ComplexNumber subtract(const ComplexNumber number_two) const{
        return ComplexNumber(real - number_two.real, imaginary - number_two.imaginary);
    }

    ComplexNumber mutliplication(const ComplexNumber number_two) const{
        return ComplexNumber(real * number_two.real - imaginary * number_two.imaginary,
                             real * number_two.imaginary + number_two.real * imaginary);
    }
    ComplexNumber division(const ComplexNumber number_two) const{
        return ComplexNumber(real * number_two.real - imaginary * number_two.imaginary,
                             real * number_two.imaginary + number_two.real * imaginary);
    }

    string pretty_print() const {
        ostringstream output;
        output << real << " + " << imaginary << "i" << endl;
        return output.str();
    } // Is there an alternative for outputting this string?
    //Tried a mixture of to_string & set_precision and returned 7.50000000 + 10.1000000i
    //instead had to use cppreference and output functions for strings. Which I wasn't too familiar with.

};

int main() {
    ComplexNumber number_one = ComplexNumber(5.0, 7.0);
    ComplexNumber number_two = ComplexNumber(2.5, 3.1);

    ComplexNumber number_three = number_one.add(number_two);
    cout << number_three.pretty_print(); // Returns 7.5 + 10.1i

    ComplexNumber number_four = number_one.subtract(number_two);
    cout << number_four.pretty_print(); // Returns 2.5 + 3.9i

    return 0;
}
