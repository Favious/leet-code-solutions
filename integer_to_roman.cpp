class Solution {
public:
    string intToRoman(int num) {
        map<int, char> m = {{1, 'I'},{5, 'V'},{10, 'X'},{50, 'L'},{100, 'C'}, {500,'D'}, {1000, 'M'}};
        string ans="";
        while(num > 0) {
            if(num >= 1000) { 
                ans+=string(num/1000, m[1000]);
                num%=1000;
            }
            if(num >= 900) {
                ans+=string(1, m[100]);
                ans+=string(1, m[1000]);
                num-=900;
            }
            if(num >= 500) {
                ans+=string(1, m[500]);
                num-=500;
            }
            if(num >= 400) {
                ans+=string(1, m[100]);
                ans+=string(1, m[500]);
                num-=400;
            }
            if(num >= 100) { 
                ans+=string(num/100, m[100]);
                num%=100;
            }
            if(num >= 90) {
                ans+=string(1, m[10]);
                ans+=string(1, m[100]);
                num-=90;
            }
            if(num >= 50) {
                ans+=string(1, m[50]);
                num-=50;
            }
            if(num >= 40) {
                ans+=string(1, m[10]);
                ans+=string(1, m[50]);
                num-=40;
            }
            if(num >= 10) { 
                ans+=string(num/10, m[10]);
                num%=10;
            }
            if(num >= 9) {
                ans+=string(1, m[1]);
                ans+=string(1, m[10]);
                num-=9;
            }
            if(num >= 5) {
                ans+=string(1, m[5]);
                num-=5;
            }
            if(num >= 4) {
                ans+=string(1, m[1]);
                ans+=string(1, m[5]);
                num-=4;
            }
            if(num >= 1) { 
                ans+=string(num/1, m[1]);
                num%=1;
            }
        }
        return ans;
    }
};
