#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "\n\tWelcome to the Payroll Program!\n" << endl;
    double HrsWrked;
    cout << "How many hours did you work this week?" << endl;
    cin >> HrsWrked;

    int amt_of_children;
    cout << "How many children do you have?" << endl;
    cin >> amt_of_children;

    double Hourly_Rate = 16.78;
    double Union_Fee = 10.00;

    double Gross;
    double Overtime_Hrs;
    if (HrsWrked <= 40) {
        Gross = Hourly_Rate * HrsWrked;

    } else {
        Overtime_Hrs = HrsWrked - 40;
        Gross = (40 * Hourly_Rate) + (Overtime_Hrs * (1.5 * Hourly_Rate));
    }

    double Insurance;
    if (amt_of_children >= 3) {
        Insurance = 35.00;
    } else {
        Insurance = 15.00;
    }
    double Social_Security = Gross * 0.06;
    double Fed_Tax = Gross * 0.14;
    double State_Tax = Gross * 0.05;
    double NetPay = Gross - (Social_Security + Fed_Tax + State_Tax + Union_Fee + Insurance);

    cout << "\n\tPayroll Stub:\n\n";
    cout << fixed << setprecision(2);

    cout << setw(10) << left << "Hours:" << setw(10) << right << HrsWrked << endl;
    cout << setw(10) << left << "Rate:" << right << " $" << setw(8) << Hourly_Rate << " per hour" << endl;
    cout << setw(10) << left << "Gross Pay:" << right << " $" << setw(8)<< Gross << endl;

    cout << setw(10) << left << "SocSec:" << right << " $" << setw(8) << Social_Security << endl;
    cout << setw(10) << left << "FedTax:" << right << " $" << setw(8) << Fed_Tax << endl;
    cout << setw(10) << left << "StTax:" << right << " $" << setw(8) << State_Tax << endl;
    cout << setw(10) << left << "Union:" << right << " $" << setw(8) << Union_Fee << endl;
    cout << setw(10) << left << "Ins:" << right << " $" << setw(8) << Insurance << endl;

    cout << "\n" << setw(10) << left << "Net: " << right << " $" << setw(8) << NetPay << endl;

    cout << "\nThank you for using the Pay Roll Calculator! Have a good one.\n";

    return 0;
}

