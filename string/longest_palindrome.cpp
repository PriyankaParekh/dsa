#include<bits/stdc++.h>

using namespace std;

string longestPalindrome(string s) {
	int length = s.size();
	int index  = -1;
	int maxlength = 0;
	// looping over the string for substrings
	for (int i = 0; i < length; i++) {
		for (int j = i; j < length; j++) {
			int isPalindrome = 1;
			// checking if string is palindrome
			for (int k = i; k <= j; k++) {
				if (s[k] != s[j - (k - i)]) {
					isPalindrome = 0;
				}
			}
			if (isPalindrome == 1 && j - i + 1 > maxlength) {
				index = i;
				maxlength = j - i + 1;
			}
		}
	}
	// return the substring from updated index till length maxlength
	string ans = "";
	for (int i = index; i < index + maxlength; i++) {
		ans += s[i];
	}
	return ans;
}

int main(){
	string word = "findnitianhere";
	cout << longestPalindrome(word) << endl;
	return 0;
}
