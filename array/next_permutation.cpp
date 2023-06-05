#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index = -1, n = nums.size();
        
        // Find the first decreasing element from the right
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                index = i;
                break;
            }
        }
        
        // Find the next greater element from the right side
        for (int i = n - 1; i > index && index != -1; i--) {
            if (nums[i] > nums[index]) {
                swap(nums[i], nums[index]);
                break;
            }
        } 
        
        // Reverse the elements after index+1
        reverse(nums.begin() + index + 1, nums.end());
    }
};

int main() {
    // Example usage
    vector<int> nums = {2,3,1};
    Solution solution;
    solution.nextPermutation(nums);
    
    // Print the modified permutation
    for (int num : nums) {
        cout << num << " ";
    }
    
    return 0;
}
