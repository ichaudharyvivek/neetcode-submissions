class Solution {
   public:
    // TC: O(n^2)
    // SC: O(n)
    // vector<int> productExceptSelf(vector<int>& nums) {
    //     int n = nums.size();
    //     vector<int> answer(nums.size(), 0);
    //     for (int i = 0; i < n; i++) {
    //         int prod = 1;
    //         for (int j = 0; j < n; j++) {
    //             if (i == j) {
    //                 continue;
    //             }
    //             prod = prod * nums[j];
    //         }
    //         answer[i] = prod;
    //     }
    //     return answer;
    // }

    // TC: O(n)
    // SC: O(n)
    // vector<int> productExceptSelf(vector<int>& nums) {
    //     int n = nums.size();
    //     vector<int> pre(n, 1), suf(n, 1);

    //     int prod = nums[0];
    //     for (int i = 1; i < n; i++) {
    //         pre[i] = prod;
    //         prod *= nums[i];
    //     }
    //     prod = nums[n - 1];
    //     for (int i = n - 2; i >= 0; i--) {
    //         suf[i] = prod;
    //         prod *= nums[i];
    //     }

    //     vector<int> answer(n, 0);
    //     for (int i = 0; i < n; i++) {
    //         answer[i] = pre[i] * suf[i];
    //     }
    //     return answer;
    // }

    // TC: O(n)
    // SC: O(1) -- Output array isn't counted
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n, 1);

        int prefix = 1;
        for (int i = 0; i < n; i++) {
            answer[i] = prefix;
            prefix *= nums[i];
        }

        int suffix = 1;
        for (int i = n - 1; i >= 0; i--) {
            answer[i] *= suffix;
            suffix *= nums[i];
        }
        return answer;
    }
};