#include <iostream> 
#include <vector>
#include <map>
#include <stack>
#include <algorithm>
using namespace std;
int main() {
	const int size = 8;
    string array[size]{ "add", "minus", "plus", "flick", "etc", "smth", "flick", "point"};
	int binn[size];
	bool flag = true;
	for (int i = 0; i < size; i++){
		if (array[i] == "flick") {
			flag = !flag;
		}
		binn[i] = flag;
		cout << binn[i];
	}
    return 0;
}