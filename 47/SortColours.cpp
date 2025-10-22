#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // This function sorts the input vector 'nums' containing 0s, 1s, and 2s in-place
    // using the Dutch National Flag algorithm.
    void sortColors(vector<int>& nums) { // *here value pass as parameter
        int l = 0, m = 0, h = nums.size() - 1; // Initialize pointers: l = low, m = mid, h = high.

        // Iterate through the array until the mid pointer crosses the high pointer.
        while (m <= h) {
            if (nums[m] == 0) { 
                // If the current element is 0, swap it with the element at the low pointer.
                // Move both low and mid pointers forward.
                swap(nums[l], nums[m]);
                l++;
                m++;
            } else if (nums[m] == 1) { 
                // If the current element is 1, just move the mid pointer forward.
                m++;
            } else { 
                // If the current element is 2, swap it with the element at the high pointer.
                // Move the high pointer backward (do not increment mid pointer).
                swap(nums[m], nums[h]);
                h--;
            }
        }
    }
};

int main() {
    // Example input: A vector containing 0s, 1s, and 2s in unsorted order.
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    Solution sol; // object declare

    // Call the sortColors function to sort the input vector.
    sol.sortColors(nums); // *here value pass as argument

    // Print the sorted vector.
    for (int num : nums) {
        cout << num << " ";
    }
    return 0;
}
