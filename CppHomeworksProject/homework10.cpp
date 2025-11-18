#include <iostream> 
using namespace std;
void square(int arr[], int size,int target) {
	int j = size - 1;
	int i = 0;
	int result[2] = { 0,0 };
	int sum1 = arr[i] + arr[j];
	while (i < j) {
		if (target<sum1){
			j--;
			sum1 = arr[i] + arr[j];
		}
		else if(target>sum1) {
			i++;
			sum1 = arr[i] + arr[j];
		}
		else {
			result[0] = i;
			result[1] = j;
			break;
		}
	}
	cout << result[0]<<" "<<result[1];
}
int main() {
	const int length = 5;
	int numbers[length] = { 1,2,3,4,5 };

	square(numbers, length, 5);
}