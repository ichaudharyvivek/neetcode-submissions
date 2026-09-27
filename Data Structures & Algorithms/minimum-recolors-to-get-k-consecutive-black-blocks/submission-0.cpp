class Solution {
   public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();
        int mini = 1e9, count = 0;
        int i = 0, j = 0;
        while (j < n) {
            if (blocks[j] == 'W') {
                count++;
            }
            if (j - i + 1 >= k) {
                mini = min(mini, count);
                if (blocks[i] == 'W') {
                    count--;
                }
                i++;
            }
            j++;
        }
        return mini;
    }
};