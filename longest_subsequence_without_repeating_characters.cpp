#include <bits/stdc++.h>
using namespace std;

int returnPositionOfDuplicate(string u, char c) {
        int i = 0;
        int ans = 0;
        bool flag = false;
        while(i < u.length() && !flag) {
            if(c == u[i]) {
                ans = i + 1;
                flag = true;
            }
            i++;
        }
        return ans;
    }
    
    int lengthOfLongestSubstring(string s) {
        int p0 = 0;
        int p1 = 0;
        int maxL = 0;
        int aux = 0;
        int currentL = 0;
        if(s.length() == 1) {
            maxL = 1;
        } else if(s.length() > 0) {
            string sub = s.substr(p0, p1 + 1);
        while(p0 < s.length() - 1) {
            while(aux == 0 && p0 + p1 < s.length()) {
                p1++;
                currentL++;
                sub = s.substr(p0, p1);
                aux = returnPositionOfDuplicate(sub, s[p0 + p1]);

            }
            if(maxL < currentL) {
                maxL = currentL;
            }
            if(aux != 0) {
                p0 += aux;
            } else {
                p0++;
            }
            p1 = 0;
            aux = 0;
            sub = s.substr(p0, p1 + 1);
            currentL = 0;
        }
        }
        return maxL;
    }
int main()
{
    cout << lengthOfLongestSubstring("pwwkew");
   
   return 0;
}
