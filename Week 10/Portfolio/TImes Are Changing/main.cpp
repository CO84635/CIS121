#include <iostream>
#include <string>
#include <iomanip>

bool time_checker(int hours, int minutes) { // Checks to see if time is in valid 24-hour format.
    if ((hours >= 0 && hours < 24) && (minutes >= 0 && minutes <= 59)) {
        return true;
    } else {
        return false;
    }
}

void time_finder(const std::string &timeInput, int &hours, int &minutes, std::string &AM_PM) {
    char colon;
    std::istringstream time_string(timeInput);
    if (timeInput.find(':') != std::string::npos) {
        time_string >> hours >> colon >> minutes;
        AM_PM = "";
    } else {
        std::istringstream(timeInput) >> hours >> colon >> minutes >> AM_PM;
        if (AM_PM == "PM" && hours != 12) {
            hours += 12;
        } else if (AM_PM == "AM" && hours == 12) {
            hours = 0;
        }
    }
}

void get_time(const std::string& question, int &hours, int &minutes, std::string &AM_PM) {
    while(true) { // Gets time from user and outputs question.
        std::string time;
        std::cout << question << std::endl;
        std::getline(std::cin, time);

        time_finder(time, hours, minutes, AM_PM);
        if(time_checker(hours, minutes)) {
            break;
        } else {
            std::cout << "That is not a valid time in 24 Hour Format!" << std::endl;
        }
    }
}

void time_on_different_days(int firstHours, int &secondHours) {
    if (firstHours > secondHours) {
        secondHours += 24;
    }
}

void time_calculations(int firstHours, int firstMinutes, int secondHours, int secondMinutes, int time_interval_type) {
    int add = 0;

    time_on_different_days(firstHours, secondHours);

    if (time_interval_type == 1) {
        add = 1; // Adds one minute to time if user chooses inclusive.
    }

    int minutesCalculation = (secondHours * 60 + secondMinutes + add) - (firstHours * 60 + firstMinutes);
    int hoursDifference = minutesCalculation / 60;
    int minutesDifference = minutesCalculation % 60;
    double decimalHours = static_cast<double>(minutesCalculation) / 60.0;

    std::cout << " * " << minutesCalculation << " minutes." << std::endl;
    std::cout << " * " << hoursDifference << " hours and " << minutesDifference << " minutes." << std::endl;
    std::cout << " * " << std::setprecision(3) <<  decimalHours << " hours." << std::endl;
}

int main() {
    std::cout << "Welcome to the Time Interval Calculation Program!" << std::endl;

    int time_interval_type;
    std::cout << "Do you want the time interval to be: " << std::endl;
    std::cout << "(1) Inclusive \n(2) Exclusive" << std::endl;
    std::cin >>  time_interval_type;
    std::cin.ignore();

    int firstHours = 0, firstMinutes = 0;
    std::string first_AM_PM;
    get_time("What is your first time?: ", firstHours, firstMinutes, first_AM_PM);

    int secondHours = 0, secondMinutes = 0;
    std::string second_AM_PM;
    get_time("What is your second time?: ", secondHours, secondMinutes, second_AM_PM);

    std::cout << "The Time interval can be written as: \n\n";

    time_calculations(firstHours, firstMinutes, secondHours, secondMinutes, time_interval_type);

    std::cout << "\nThank you for using the Time Interval Calculation Program.";

    return 0;
}
