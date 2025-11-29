#include <iostream> 
#include <vector>
#include <map>
#include <stack>
using namespace std;
int main() {//stack reshenie
	string s = "[]([)]";
	stack<char> stackk;
	map<char, char> brackets;
	brackets['}'] = '{';
	brackets[')'] = '(';
	brackets[']'] = '[';
	stackk.push(s[0]);
	for (char ch : s) {
		if (brackets[ch] == stackk.top()) {
			stackk.pop();
		}
		else {
			stackk.push(ch);
		}
	}//Kostil
	if (stackk.size() == 1) {
		cout << "true";
	}
	else {
		cout << "false";
	}
	return 0;
}