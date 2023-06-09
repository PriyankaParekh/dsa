// C++ program to find longest
// contiguous subsequence
#include <bits/stdc++.h>
using namespace std;

// Returns length of the longest
// contiguous subsequence
int findLongestConseqSubseq(int arr[], int n)
{
	unordered_set<int> S;
	int ans = 0;

	// Hash all the array elements
	for (int i = 0; i < n; i++)
		S.insert(arr[i]);

	// check each possible sequence from
	// the start then update optimal length
	for (int i = 0; i < n; i++) {
		// Check if the previous number (arr[i] - 1) is
		// present in the set,
		// if it is then that number (arr[i]) is not the
		// starting of the sequence.
		if (S.find(arr[i] - 1) != S.end()) {
			continue;
		}
		else {
			// If previous number is not present, that means
			// that number is the starting of the sequence.
			int j = arr[i];
			while (S.find(j) != S.end())
				j++;
			// update optimal length if
			// this length is more
			ans = max(ans, j - arr[i]);
		}
	}
	return ans;
}

// Driver code
int main()
{
	int arr[] = { 1, 9, 3, 10, 4, 20, 2 };
	int n = sizeof arr / sizeof arr[0];
	cout << "Length of the Longest contiguous subsequence is "
		<< findLongestConseqSubseq(arr, n);
	return 0;
}
