class Solution {
   public:
    // Brute
    // TC: O(n^2)
    // SC: O(1)
    // bool containsNearbyDuplicate(vector<int>& nums, int k) {
    //     int n = nums.size();
    //     for (int i = 0; i < n - 1; i++) {
    //         for (int j = i + 1; j < n; j++) {
    //             if (nums[i] == nums[j] && abs(i - j) <= k) {
    //                 return true;
    //             }
    //         }
    //     }
    //     return false;
    // }

    // Optimized
    // TC: O(n)
    // SC: O(k)
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size(), i = 0, j = 0;
        unordered_set<int> st;
        while (j < n) {
            if (st.find(nums[j]) != st.end()) {
                return true;
            }
            st.insert(nums[j]);
            j++;
            if (j - i > k) {
                st.erase(nums[i]);
                i++;
            }
        }
        return false;
    }
};