#include <iostream> 
#include <vector>
#include <map>
#include <stack>
#include <algorithm>
using namespace std;
int main() {
	int size;
	cout << "¬ведите размер массива: ";
	cin >> size;
    vector<int> array(size);

    cout << "¬ведите " << size << " элементов массива:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Ёлемент " << i + 1 << ": ";
        cin >> array[i];
    }
    int x;
    cout << "¬ведите искомый элемент: ";
    cin >> x;
    int finIndex;
    sort(array.begin(), array.end());
    int l = 0,r=size;
    int k=0;
    bool flag = false;
    while ((l <= r) && (flag != true)) {
        k = (l + r) / 2;

        if (array[k] == x) {
            flag = true;
        }
        if (array[k] > x) {
            r = k - 1;
        }
        else {
            l = k + 1;
        }
    }
    cout << "»ндекс искомого элемента: "<<k;
	return 0;
}