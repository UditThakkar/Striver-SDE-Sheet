class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        long long int t = n;
        if(t<0) t = -1*t;
        while(t){
            if(t%2){
                ans = (ans * x);
                t = t-1;
            }
            else{
                x = (x*x);
                t = t/2;
            }
        }
        if(n<0) ans = 1/ans;
        return ans;
        }
    
    // return ans;
};
