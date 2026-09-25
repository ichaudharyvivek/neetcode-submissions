class Solution {
   public:
    bool validWordAbbreviation(string word, string abbr) {
        if (word == abbr) {
            return true;
        }
        int m = word.size(), n = abbr.size();
        int i = 0, j = 0;
        while (i < m && j < n) {
            if (abbr[j] == '0') {
                return false;
            }
            if (isdigit(abbr[j])) {
                int k = j;
                while (isdigit(abbr[k])) {
                    k++;
                }
                int num = stoi(abbr.substr(j, k - j + 1));
                i += num;
                j = k;
            }
            if (i > m || j > n || word[i] != abbr[j]) {
                return false;
            }
            i++;
            j++;
        }
        return true;
    }
};