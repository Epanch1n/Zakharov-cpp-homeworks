#include <iostream> 
using namespace std;
int main() {
    char symb = ' ';
    std::cout << "Print symbol: ";
    std::cin >> symb;
    int SymbolCode = symb;
    std::cout << "\nSymbol: " << symb;
    std::cout << "\nSymbol code: " << SymbolCode;
    std::cout << "\nNext symbol code: " << SymbolCode+1;
    char nextSymb = symb + 1;
    std::cout << "\nNext symbol: " << nextSymb;
    return 0;
}