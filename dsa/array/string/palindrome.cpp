#include <bits/stdc++.h>
using namespace std;
string isPalindrome(string str)
{
	string P = str;
	reverse(P.begin(), P.end());

	if (str == P) {
		return "1";
	}
	else {
		return "0";
	}
}

int main()
{
	string str;
    cin>>str;
	cout << isPalindrome(str);
	return 0;
}
