class Solution {
   public:
    string mergeAlternately(string word1, string word2) {
        int i = 0, j = 0, m = word1.size(), n = word2.size();
        string str = "";
        while (i < m && j < n) {
            str += word1[i++];
            str += word2[j++];
        }
        for (; i < m; i++) {
            str += word1[i];
        }
        for (; j < n; j++) {
            str += word2[j];
        }
        return str;
    }
};