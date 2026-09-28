class Solution {
   public:
    // Brute
    // TC: O(n*k)
    // SC: O(1)
    // int numOfSubarrays(vector<int>& arr, int k, int threshold) {
    //     int n = arr.size(), count = 0;
    //     for (int i = 0; i < n - k + 1; i++) {
    //         int sum = 0;
    //         for (int j = i; j < i + k; j++) {
    //             sum += arr[j];
    //         }
    //         if (sum / k >= threshold) {
    //             count++;
    //         }
    //     }
    //     return count;
    // }

    // Optmized
    // TC: O(n)
    // SC: O(1)
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size(), i = 0, j = 0;
        int sum = 0, count = 0;
        while (j < n) {
            sum += arr[j];
            if (j - i + 1 >= k) {
                if (sum / k >= threshold) {
                    count++;
                }
                sum -= arr[i];
                i++;
            }
            j++;
        }
        return count;
    }
};