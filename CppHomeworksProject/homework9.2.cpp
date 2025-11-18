#include <iostream> 
using namespace std;
void square(int &x) {
	x += 10;
	cout << x;
}
int main() {
	int x;
	cin >> x;
	square(x);
}