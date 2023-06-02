#include <cstring>
#include <iostream>
#include <queue>
using namespace std;

string firstNonRepeatingChar(string input_stream)
{
    int count[26] = {0};
    queue<char> q;
    string answer = "";

    for (char c : input_stream) {
        count[c - 'a']++; // Increment the frequency of the character

        q.push(c);

        while (!q.empty() && count[q.front() - 'a'] > 1) {
            q.pop();
        }

        if (q.empty()) {
            answer += '#';
        } else {
            answer += q.front();
        }
    }

    return answer;
}

int main()
{
    string input_stream = "geeksforgeeksandgeeksquizfor";
    string answer = firstNonRepeatingChar(input_stream);
    cout << answer << endl;
    return 0;
}
