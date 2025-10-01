#include <iostream> 
using namespace std;
int main() {
    float width, length = 0;
    std::cout << "Print width: ";
    std::cin >> width;
    std::cout << "\nPrint length: ";
    std::cin >> length;
    std::cout << "\Square: " << width * length;
    std::cout << "\nPerimeter: " << width*2 + length*2;
    return 0;
}