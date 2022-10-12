class Solution {
public:
    bool isPalindrome(int x) {
        long long n,rem,y=0;
        n=x;
        while(n>0)
        {
            rem = n%10;
            y = y*10 + rem;
            n/=10;
        }
        return(x==y);
    }
};