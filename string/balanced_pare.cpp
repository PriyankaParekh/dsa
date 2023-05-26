#include <bits/stdc++.h>
using namespace std;

bool balanced(string str)
{
	stack<char> ele;
	for (int i = 0; i < str.length(); i++) {
		if (ele.empty()) {
			ele.push(str[i]);
		}
		else if ((ele.top() == '(' && str[i] == ')')
				|| (ele.top() == '{' && str[i] == '}')
				|| (ele.top() == '[' && str[i] == ']')) {
			ele.pop();
		}
		else {
			ele.push(str[i]);
		}
	}
	if (ele.empty()) {
		return true;
	}
	return false;
}

int main()
{
	string str;
    cin>>str;

	if (balanced(str))
		cout << "true";
	else
		cout << "false";
	return 0;
}
