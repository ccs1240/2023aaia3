class Solution {
public:
    double helper(double x, long long n) {///函式呼叫函式
        if (n==0) return 1;
        if(n==1) return x;
        double now = helper(x,n/2);
        if(n%2==0) return now*now;
        else return now*now*x;
    }
    double myPow(double x, long long n)///長*2整數64位元
    {
        double ans=1;
        if(n<0)
        { 
            n=-n;
            x=1/x;
        }
        return helper(x,n);
    }
    
};