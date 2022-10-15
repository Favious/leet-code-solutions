class Solution {
public:
    int reverse(int x) {
        string xs=to_string(x);
        int l=xs.length();
        int aux=0;
        long long ans=0;
        bool flag=false;
        bool isNegative=false;
        if(x <= -1) {
            if((long)x*-1 < INT_MIN || (long)x*-1 > INT_MAX) {
                x=0;
            } else {
                x*=-1;
            }
            l--;
            isNegative=true;
        }
        long v=pow(10, l - 1);
        while(x > 0 && !flag) {
            if(ans >= INT_MIN && ans <= INT_MAX) {
                aux=x%10;
                ans+=aux*v;
                v/=10;
                x/=10;
            } else {
                flag=true;
                ans=0;
            }
        }
        if(isNegative) {
            ans*=-1;
        }
        return (int)ans;
    }
};
