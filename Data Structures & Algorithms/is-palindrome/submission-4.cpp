class Solution {
   public:
    bool isPalindrome(string s) {
        string str = "";
        for(auto &e:s){
            if(isalnum(e)){
                str+=e;
            }
        }

        bool isP = true;
        int i = 0, j = str.size() - 1;
        while (i < j) {
            if (tolower(str[i++]) != tolower(str[j--])) {
                isP = false;
            }
        }
        return isP;
    }
};
