#include <iostream> 
using namespace std;
int main() {
	string word;
	cin >> word;
	string wordWithoutSpace;
	for (int i = 0; i < word.length(); i++)
	{
		if (word[i] != ' ') {
			wordWithoutSpace += word[i];
		}
	}
	bool iso = true;
	for (int i = 0; i < wordWithoutSpace.length(); i++){
		for (int j = i+1; j < wordWithoutSpace.length(); j++){
			if (wordWithoutSpace[i] == wordWithoutSpace[j]) {
				iso=false;
				break;
			}
		}
	}
	cout << iso;
}