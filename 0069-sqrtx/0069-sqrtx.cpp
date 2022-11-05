class Solution {
public:
    int mySqrt(int x) {
        long long mid,lo = 0, hi=x;
        
        while(lo<=hi){
            mid = lo + (hi-lo)/2;
            if((mid*mid)==x)
                return mid;
            else if((mid*mid)>x){
                hi=mid-1;
            }
            else if((mid*mid)<x){
                lo=mid+1;
            }
        }
        return hi;
    }
};