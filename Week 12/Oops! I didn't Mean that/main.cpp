#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<typename T>
std::vector<T> remove_duplicates(const std::vector<T> &my_vector){
    std::vector<T> unique_vector = my_vector;
    std::sort(unique_vector.begin(), unique_vector.end());
    unique_vector.erase(std::unique(unique_vector.begin(), unique_vector.end()), unique_vector.end());
    return unique_vector;
}

int main()
{
    std::vector<int> test_vector = {1, 2, 3, 4, 5, 5, 6, 7, 7, 8, 9, 9};
    vector<int> unique_vector = remove_duplicates(test_vector);

    std::cout << "Original Vector with duplicates: ";
    for (int num : test_vector) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Vector without duplicates: ";
    for (int num : unique_vector) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
