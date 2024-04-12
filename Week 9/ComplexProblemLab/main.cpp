#include <iostream>
#include <iomanip>
#include <cmath>

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
        float dividend = number_two.real * number_two.real + number_two.imaginary * number_two.imaginary;
        float real_result = (real * number_two.imaginary + number_two.real * imaginary) / dividend;
        float imaginary_result = (real * number_two.real - imaginary * number_two.imaginary) /dividend;
        return ComplexNumber(real_result, imaginary_result);
    }

    ComplexNumber negation() const{
        return ComplexNumber(- real, - imaginary);
    }

    float magnitude() const{
        return sqrt(((real * real) + (imaginary * imaginary)));
    }

    ComplexNumber conjugation() const{
        return ComplexNumber(real, -imaginary);
    }

    float real_part() const{
        return real;
    }

    float imaginary_part() const{
        return imaginary;
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

    return 0;
}
