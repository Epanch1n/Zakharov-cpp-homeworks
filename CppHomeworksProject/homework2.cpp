#include <iostream> 
using namespace std;
int main() {
    float firstNum, secondNum = 0;
    std::cout << "Print first number: ";
    std::cin >> firstNum;
    std::cout << "\nPrint second number: ";
    std::cin >> secondNum;
    std::cout << "\nSumm: " << firstNum+secondNum;
    std::cout << "\nDiff: " << firstNum-secondNum;
    std::cout << "\nMultip: " << firstNum*secondNum;
    return 0;
}