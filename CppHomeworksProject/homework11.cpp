#include <iostream> 
#include <map>
using namespace std;

int main() {
	map<char, int> brackets;
	int result = 0;
	brackets['I'] = 1;
	brackets['V'] = 5;
	brackets['X'] = 10;
	brackets['L'] = 50;
	brackets['C'] = 100;
	brackets['D'] = 500;
	brackets['M'] = 1000;
	string s = "MCMXCIV";
	for (int i = 0; i < s.length(); i++) {
		if (brackets[s[i]]<brackets[s[i+1]] and i<s.length()-1){
			result -= brackets[s[i]];
		}
		else {
			result += brackets[s[i]];
		}
	}
	cout<<result;
}