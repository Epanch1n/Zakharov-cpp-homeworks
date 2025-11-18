#include <iostream> 
using namespace std;
int main() {
    srand(time(0));
    int arr[5];
	for (int i = 0; i < 5; i++)
	{
		arr[i] = rand();
	}
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i]<<' ';
	}
}