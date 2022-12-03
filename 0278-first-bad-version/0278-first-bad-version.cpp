// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int mid,lo=1;
        while(lo<n)
        {
            mid = lo + (n-lo)/2;
            
            if(isBadVersion(mid))
                n=mid;
            else
                lo=mid+1;
        }        
        return n;
    }
};