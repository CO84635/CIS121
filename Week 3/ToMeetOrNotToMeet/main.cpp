#include <iostream>
#include <cmath>

using namespace std;
int main() {
    cout << "\n\tWelcome to the Room Capacity Program.\n" << endl;

    int maxPeopleCapacity;
    cout << "How many people can this room hold?\n";
    cin >> maxPeopleCapacity;

    int numberOfPeople;
    cout << "How many people showed up for the meeting?\n";
    cin >> numberOfPeople;

    double percentOfCapacity = ceil((static_cast<double>(numberOfPeople) / static_cast<double>(maxPeopleCapacity)) *
            100);
    cout << "You have used up " << percentOfCapacity << "% of your room's capacity.\n";

    int amountRoomLeft = maxPeopleCapacity - numberOfPeople;
    if (amountRoomLeft > 0) {
        cout << "You still have room for " << amountRoomLeft << " more people.\n";}
    else {
        cout << "There is no more room."; };

    if (amountRoomLeft <= maxPeopleCapacity) {
        cout << "This meeting is LEGAL! Continue on with your business.\n"
    ;}
    else {
        cout << "This meeting is NOT LEGAL! Beyond max capacity.\n"
    ;}

    cout << "Thank you for using the Room Capacity calculator! Have a good one.";

    return 0;
}
