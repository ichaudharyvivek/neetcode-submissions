class Solution {
   public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 0);
        int l = 0, r = n - 1, pos = n - 1;
        while (l <= r) {
            int left = pow(nums[l], 2);
            int right = pow(nums[r], 2);
            if (left > right) {
                result[pos--] = left;
                l++;
            } else {
                result[pos--] = right;
                r--;
            }
        }
        return result;
    }
};