#include <iostream>
#include <unordered_map>
#include <climits>
using namespace std;

string findSmallestWindow(string str, string pattern) {
    int n = str.length();
    int m = pattern.length();

    // If pattern length is greater than the string length, no window is possible
    if (n < m) {
        return "";
    }

    // Store the frequency of characters in the pattern
    unordered_map<char, int> patternFreq;
    for (char c : pattern) {
        patternFreq[c]++;
    }

    int windowStart = 0;  // Window start index
    int minWindowLength = INT_MAX;  // Minimum window length
    int count = 0;  // Count of characters matched

    // Variables to track the starting index of the smallest window
    int minWindowStart = -1;
    int minWindowEnd = -1;

    // Traverse through the string
    for (int windowEnd = 0; windowEnd < n; windowEnd++) {
        char currentChar = str[windowEnd];

        // If the current character is found in the pattern, decrement its frequency
        if (patternFreq.find(currentChar) != patternFreq.end()) {
            patternFreq[currentChar]--;
            
            // If the frequency of the current character becomes zero, it is a match
            if (patternFreq[currentChar] >= 0) {
                count++;
            }
        }

        // If all characters are matched
        if (count == m) {
            // Try to minimize the window by moving the window start to right
            while (patternFreq.find(str[windowStart]) == patternFreq.end() || patternFreq[str[windowStart]] < 0) {
                if (patternFreq.find(str[windowStart]) != patternFreq.end()) {
                    patternFreq[str[windowStart]]++;  // Increment frequency of non-required character
                }
                windowStart++;
            }

            // Update the minimum window length and starting indices
            int windowLength = windowEnd - windowStart + 1;
            if (windowLength < minWindowLength) {
                minWindowLength = windowLength;
                minWindowStart = windowStart;
                minWindowEnd = windowEnd;
            }
        }
    }

    // If no window found
    if (minWindowStart == -1) {
        return "";
    }

    // Extract the smallest window substring
    string smallestWindow = str.substr(minWindowStart, minWindowLength);
    return smallestWindow;
}

int main() {
    string str = "this is a test string";
    string pattern = "tist";

    string smallestWindow = findSmallestWindow(str, pattern);
    if (smallestWindow.empty()) {
        cout << "No window found";
    } else {
        cout << "Smallest window containing all characters: " << smallestWindow;
    }

    return 0;
}
