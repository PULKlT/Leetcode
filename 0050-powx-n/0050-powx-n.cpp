class Solution {
public:
    double myPow(double x, int n) {
        // if(x==-1&&n%2==0)    return 1;
        // if(x==-1&&n%2==1)    return -1;
        // if(x==1)             return 1;
        // if(x>0&&x<1&&n>1000000||n<-214783647)   return 0;
        // if(n==0)
        //     return 1;
        // else if(n>0)
        //     return (myPow(x,n-1)*x);        
        // else
        //     return (1/(myPow(x,-n)));
        
        if(n < 0) {
            x = 1 / x;
        } 
        long num = labs(n);
        double pow = 1;        
        while(num){ // equivalent to while(num != 0)
            if(num & 1) { // equivalent to if((num & 1) != 0) odd
                pow *= x;
            }            
            x *= x;
            num >>= 1;
        }        
        return pow;
    }
};