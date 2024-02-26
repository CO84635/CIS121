#include <iostream>

int main() {
    std::cout << "Welcome to the Ounce Conversion Program!\n" << std::endl;

    int OunceInputValue; // User can only enter a whole number of ounces, only int required
    std::cout << "How many ounces do you have?" << std::endl;
    std::cin >> OunceInputValue;
    std::cout << "Thanks! Converting ounces to pounds..." << std::endl;

    double PoundOutValue = static_cast<int>(OunceInputValue) / 16;
    double OuncesRemaining = OunceInputValue % 16;
    double DecimalPoundValue = OunceInputValue * 0.0625;   // Converting Oz to independent pounds

    std::cout << OunceInputValue << " oz is equivalent to " << PoundOutValue << " lbs and " << OuncesRemaining <<
    " Oz." << std::endl;
    std::cout << OunceInputValue << " oz is equivalent to " << DecimalPoundValue << " lbs."
    << std::endl;
    std::cout << "Thank you for using the Ounce Conversion Program! Bye now." << std::endl;

    return 0;

}
