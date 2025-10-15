#include <iostream> 
using namespace std;
int main() {
    int number = 0;
    std::cout << "Print number: "<<endl;
    std::cin >> number;
    std::cout << "Numbers from 1 to "<< number<<endl;
    for (int i = 1; i < number+1; i++)
    {
        cout << i;
    }
}