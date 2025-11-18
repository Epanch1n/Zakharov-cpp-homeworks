#include <iostream> 
using namespace std;
int square(int x) {
	return x * x;
}
int main() {
	int number;
	cin >> number;
	cout << square(number);
}