class Solution {
public:
    int reverse(int x) {
        long rev=0,rem=0,neg=0;
        if(x>=2147483647||x<=-2147483648)
            return 0;
        if(x<0){
            x=x*-1;
            neg=1;
        }
            
        while(x)
        {
            rem=x%10;
            rev = rev *10 + rem;
            x/=10;
        }
        if(neg==1)
            rev=rev*-1;
        if(rev>2147483647||rev<-2147483648)
            return 0;
        return rev;
    }
};