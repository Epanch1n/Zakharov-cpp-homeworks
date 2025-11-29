#include <iostream> 
#include <vector>
#include <map>
#include <stack>
using namespace std;
int main() {//stack
	string s = "()[]({})";
	int sSize = s.size();
	string symb = "";
	string symbPrev = "";
	stack<string> stackk;
	map<string, string> brackets;
	brackets["}"] = "{";
	brackets[")"] = "(";
	brackets["]"] = "[";
	for (int i = 1; i < sSize; i++)
	{
		symb = s[i];
		symbPrev = s[i - 1];
		if (brackets[symb] == symbPrev) {
			stackk.pop();
		}
		else {
			stackk.push(symb);
		}
	}
	return 0;
}