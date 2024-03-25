#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

void time_finder(const std::string &timeInput, int &hours, int &minutes) {
    char colon;
    std::istringstream(timeInput) >> hours >> colon >> minutes;
}
void time_calculations(int firstHours, int firstMinutes, int secondHours, int secondMinutes) {
    int minutesCalculation = (secondHours * 60 + secondMinutes) - (firstHours * 60 + firstMinutes);
    int hoursDifference = minutesCalculation / 60;
    int minutesDifference = minutesCalculation % 60;
    double decimalHours = static_cast<double>(minutesCalculation) / 60.0;
    std::cout << " * " << minutesCalculation << " minutes." << std::endl;
    std::cout << " * " << hoursDifference << " hours and " << minutesDifference << " minutes." << std::endl;
    std::cout << " * " << std::setprecision(3) <<  decimalHours << " hours." << std::endl;

}
int main() {
    std::cout << "Welcome to the Time Interval Calculation Program!" << std::endl;

    std::string firstTime;
    std::cout << "What is your first time?:" << std::endl;
    std::getline(std::cin, firstTime);

    int firstHours, firstMinutes;
    time_finder(firstTime, firstHours, firstMinutes);

    std::string secondTime;
    std::cout << "What is your second time?:" << std::endl;
    std::getline(std::cin, secondTime);

    int secondHours, secondMinutes;
    time_finder(secondTime, secondHours, secondMinutes);

    std::cout << "The Time interval can be written as: \n\n";

    time_calculations(firstHours, firstMinutes, secondHours, secondMinutes);

    std::cout << "\nThank you for using the Time Interval Calculation Program.";

    return 0;
}
