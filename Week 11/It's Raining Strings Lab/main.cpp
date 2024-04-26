#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> business_list;
    std::cout << "Welcome to the Business Sorting Program! \n" << std::endl;

    int i = 0;
    while(true) {
        std::string input;
        std::cout << "Please enter the name of a business: " << std::endl;
        getline(std::cin, input );
        business_list.push_back(input);
        i++;

        std::cout << "Your businesses are: \n" << std::endl;
        for (int n = 0; n < business_list.size(); n++) {
            std::sort(business_list.begin(), business_list.end());
            std::cout << business_list.at(n) << std::endl;
        }

        std::string choice;
        std::cout << "\nAnother business? " << std::endl;
        std::cin >> std::ws;
        getline(std::cin, choice);
        if (choice == "Yes" || choice == "yes" || choice == "Y" || choice == "y") {
            continue;
        } else {
            break;
        }
    }

    std::cout << "Thank you for running the Business Sorting Program!" << std::endl;
    return 0;
}
