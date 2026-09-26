class Solution {
   public:
    // Brute force
    // TC: O(n)
    // SC: O(n)
    // vector<int> sortArrayByParity(vector<int>& nums) {
    //     vector<int> res;
    //     for (auto& e : nums) {
    //         if (!(e & 1)) {
    //             res.push_back(e);
    //         }
    //     }
    //     for (auto& e : nums) {
    //         if (e & 1) {
    //             res.push_back(e);
    //         }
    //     }
    //     return res;
    // }

    // Optimized
    // TC: O(n)
    // SC: O(1)
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = n - 1;
        while (i < j) {
            while (i < n && nums[i] % 2 == 0) {
                i++;
            }
            while (j >= 0 && nums[j] % 2 == 1) {
                j--;
            }
            if (i < n && j >= 0 && i < j) {
                swap(nums[i], nums[j]);
            }
        }
        return nums;
    }
};