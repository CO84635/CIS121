#include <iostream>

int main() {

    std::cout << "\n\tWelcome to the monogram program!\n\n";

    char firstInitial,
         secondInitial,
         thirdInitial;
    std::cout << "What are your initials? (Ex: O B C)\n";
    std::cin >> firstInitial >> secondInitial >> thirdInitial;

    secondInitial = toupper(secondInitial);
    thirdInitial = toupper(thirdInitial);
    firstInitial = tolower(firstInitial);

    std::cout << "\nYour monogram will be " << secondInitial <<"." << firstInitial << "." << thirdInitial << ".\n\n";

    std::cout << "Thank you for using the Monogram program!";

    return 0;
}
