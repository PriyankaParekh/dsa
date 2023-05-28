#include <iostream>
#include <vector>
using namespace std;

int longestPrefixSuffix(const string& str) {
    int n = str.length(); //9
    vector<int> lps(n, 0);

    int len = 0; 
    int i = 1;

    while (i < n) { 
        if (str[i] == str[len]) { //blablabla -- b-b i=3, l-l,a-a,b-b,l-l,a-a
            len++;  //len-1,2,3,4,5,6
            lps[i] = len; //lps-8=6
            i++; //9
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else { 
                lps[i] = 0; //lps-1=0,2-0
                i++;  //2,3
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
