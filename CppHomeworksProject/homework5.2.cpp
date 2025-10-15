#include <iostream> 
using namespace std;
int main() {
    int number = 0;
    std::cout << "Print number: ";
    std::cin >> number;
    if (number > 0) {
        std::cout << "Positive";
    }
    else if (number < 0) {
        std::cout << "Negative";
    }
    else {
        std::cout << "Zero";
    }
}