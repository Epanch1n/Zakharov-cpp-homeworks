#include <iostream> 
using namespace std;
int main() {
    int firstNumber,secondNumber = 0;
    std::cout << "Print first number: ";
    std::cin >> firstNumber;
    std::cout << "Print second number: ";
    std::cin >> secondNumber;
    firstNumber += secondNumber;
    secondNumber -= firstNumber;
    firstNumber -= abs(secondNumber);
    std::cout << "After: "<<"\nFirst number: "<< firstNumber << "\nSecond number: " << abs(secondNumber);
    return 0;
}