class Solution {
public:
    long long fac(int n,int r){
        if(n==1||n==0||n<=r)
            return 1;
        else
            return n*fac(n-1,r);
    }
    
    int uniquePaths(int m, int n) {
        m--;n--;
        long ans=1,j=1;
        int x = (m>n)?m:n;
        int y = (m<n)?m:n;
        for(int i=x+1;i<=x+y;i++,j++){
            ans*=i;
            ans/=j;
        }
        // ans = fac(i+j,i)/(fac(j,0));
        return (int)ans;
    }
};