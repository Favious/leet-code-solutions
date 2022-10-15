class Solution {
public:
    int romanToInt(string s) {
        int i = s.length() - 1;
        int sum = 0;
        map<char, int> m = {{'I', 1},{'V', 5},{'X', 10},{'L', 50},{'C', 100}, {'D', 500}, {'M', 1000}};
        while(i > -1) {
            if(i > 0) {
                if(s[i - 1] == 'I' && (s[i] == 'V' || s[i] == 'X')) {
                    sum += m[s[i]] - 1;
                } else if(s[i - 1] == 'X' && (s[i] == 'L' || s[i] == 'C')) {
                    sum += m[s[i]] - 10;
                } else if(s[i - 1] == 'C' && (s[i] == 'D' || s[i] == 'M')) {
                    sum += m[s[i]] - 100;
                } else {
                    sum += m[s[i]];
                    i++;
                }
                i--;
            } else {
                sum += m[s[i]];   
            }
            i--;
        }
            return sum;

    }
};
