#include <iostream> 
#include <vector>
#include <map>
#include <stack>
#include <algorithm>
using namespace std;
int main() {
	const int dec2D = 2;
	float C[dec2D]{ 2,-1 };
	float r = 5;
	float pointCoords[dec2D];
	cout << "Print first coord: ";
	cin >> pointCoords[0];
	cout << "Print second coord: ";
	cin >> pointCoords[1];
	if (((pointCoords[0] - C[0]) * (pointCoords[0] - C[0]) + (pointCoords[1] - C[1]) * (pointCoords[1] - C[1]))>r*r) {
		cout << "outside";
	}
	else if (((pointCoords[0] - C[0]) * (pointCoords[0] - C[0]) + (pointCoords[1] - C[1]) * (pointCoords[1] - C[1])) == r * r) {
		cout << "border";
	}
	else{
		cout << "inside";
	}
	return 0;
}