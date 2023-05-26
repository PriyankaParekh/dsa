#include <iostream>
#include <unordered_map>
using namespace std;

bool isIsomorphic(const string& s, const string& t) {
    if (s.length() != t.length()) {
        return false;
    }

    unordered_map<char, char> charMap; // Mapping from characters in s to characters in t
    unordered_map<char, bool> usedChars; // To check if a character in t is already used

    for (int i = 0; i < s.length(); i++) {
        char c1 = s[i];
        char c2 = t[i];

        if (charMap.find(c1) != charMap.end()) {
            // c1 is already mapped to a character in t, check if it matches c2
            if (charMap[c1] != c2) {
                return false;
            }
        } else {
            // c1 is not mapped yet
            if (usedChars[c2]) {
                // c2 is already used by another character in s
                return false;
            }
            charMap[c1] = c2;
            usedChars[c2] = true;
        }
    }

    return true;
}

int main() {
    string s1 = "egg";
    string t1 = "add";
    cout << "Isomorphic? " << (isIsomorphic(s1, t1) ? "Yes" : "No") << endl;

    string s2 = "foo";
    string t2 = "bar";
    cout << "Isomorphic? " << (isIsomorphic(s2, t2) ? "Yes" : "No") << endl;

    string s3 = "paper";
    string t3 = "title";
    cout << "Isomorphic? " << (isIsomorphic(s3, t3) ? "Yes" : "No") << endl;

    return 0;
}
