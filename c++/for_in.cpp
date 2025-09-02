#include <iostream>
#include <vector>

int main() {
    // Iterating over an array
    int numbers[] = {1, 2, 3, 4, 5};
    for (int num : numbers) {
        std::cout << numbers[num] << " ";
    }
    std::cout << std::endl;

    // Iterating over a std::vector
    std::vector<std::string> fruits = {"apple", "banana", "cherry"};
    for (const std::string& fruit : fruits) { // Using const reference for efficiency
        std::cout << fruit << " ";
    }
    std::cout << std::endl;

    return 0;
}