#include <iostream> 
using namespace std;
int main() {
	int arr[3][3];
	int iterr = 0;
	int elSum = 0;
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			iterr++;
			elSum += iterr;
			arr[i][j] = iterr;
		}
	}
	cout << "Array: "<<endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Elements Sum: " << elSum;
}