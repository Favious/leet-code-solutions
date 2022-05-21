class Solution {
public:
    bool isPalindrome(int x) {
        string copy = to_string(x);
        bool isPalindrome = true;
        if(x > -1) {
            int i = 0;
            int j = copy.length() - 1;
            while(i <= j && isPalindrome) {
                if(copy[i] != copy[j]) {
                    isPalindrome = false;
                }
                i++;
                j--;
            }
        } else {
            isPalindrome = false;
        }
        return isPalindrome;
    }
};
