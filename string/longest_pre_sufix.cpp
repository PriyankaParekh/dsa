#include <iostream>
#include <vector>
using namespace std;

int longestPrefixSuffix(const string& str) {
    int n = str.length();
    vector<int> lps(n, 0);

    int len = 0; 
    int i = 1;

    while (i < n) {
        if (str[i] == str[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }

    return lps[n - 1];
}

int main() {
    string s = "blablabla";
    int length = longestPrefixSuffix(s);
    cout << "Length of the longest prefix which is also a suffix: " << length << endl;
    return 0;
}
