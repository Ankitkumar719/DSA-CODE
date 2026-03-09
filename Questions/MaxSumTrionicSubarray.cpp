#include <iostream>
#include <climits>
#include <vector>
using namespace std;

class Solution {
public:
    long long maxSumTrionic(vector<int>& nums) {
        long long ans = LLONG_MIN;
        long long psum = nums[0];

        int l = 0, p = 0, q = 0;

        for (int r = 1; r < nums.size(); r++) {
            psum=psum+nums[r];

            if (nums[r - 1] == nums[r]) {
                l = r;
                psum = nums[r];
            }
            else if (nums[r - 1] > nums[r]) {
                if (r > 1 && nums[r - 2] < nums[r - 1]) {
                    p = r - 1;

                    while (l < q) {
                        psum=psum-nums[l++];
                    }

                    while (l + 1 < p && nums[l] < 0) {
                        psum=psum-nums[l++];
                    }
                }
            }
            else {
                if (r > 1 && nums[r - 2] > nums[r - 1]) {
                    q = r - 1;
                }

                if (l < p && p < q) {
                    ans = max(ans, psum);
                }
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 3, 5, 4, 2, 6, 8};
    cout << s.maxSumTrionic(nums);
    return 0;
}
