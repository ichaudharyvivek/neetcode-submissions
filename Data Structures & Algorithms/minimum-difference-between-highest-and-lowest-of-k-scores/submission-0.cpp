class Solution {
   public:
    // TC: O(n)
    // SC: O(1)
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int i = 0, j = 0, mini = 1e9;
        while (j < n) {
            if (j - i + 1 >= k) {
                mini = min(mini, nums[j] - nums[i]);
                i++;
            }
            j++;
        }
        return mini;
    }
};