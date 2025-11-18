#include <iostream> 
using namespace std;
int main() {
	int x;
	cin >> x;
	if (x < 0) {
		cout << false;
	}
	int xbegin = x;
	int xReversed = 0;
//Развернули число
	while (x>0){
		int intermed = x % 10;
		xReversed = xReversed * 10 + intermed;
		x = x / 10;
	}
	if (xbegin == xReversed) {
		cout << true;
	}
	else {
		cout << false;
	}
}