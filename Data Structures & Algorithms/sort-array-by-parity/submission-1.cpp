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
        int i = 0;
        for (int j = 0; j < nums.size(); j++) {
            if ((nums[j] & 1) == 0) {
                swap(nums[i], nums[j]);
                i++;
            }
        }
        return nums;
    }
};