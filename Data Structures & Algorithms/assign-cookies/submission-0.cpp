class Solution {
   public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int gs = g.size();
        int ss = s.size();
        int i = gs - 1, j = ss - 1;
        int count = 0;
        while (i >= 0 && j >= 0) {
            if (g[i] <= s[j]) {
                count++;
                j--;
            }
            i--;
        }
        return count;
    }
};