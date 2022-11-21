class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> ans = new ArrayList<>();
        
        for(int i=0;i<numRows;i++){
            List<Integer> temp = new ArrayList<>();
            for(int j=0;j<=i;j++){
                temp.add((int)(ncr(i,j)));
            }
            ans.add(temp);
        }
        return ans;
    }
    
    public long ncr(int x,int y){
        if((x-y)>y){
            long a = 1L;
            for(int i=x;i>(x-y);i--)
            {
                a = a*i;
            }
            return a/fact(y);
        }
        else{
            long a = 1L;
            for(int i=x;i>y;i--)
            {
                a = a*i;
            }
            return a/fact(x-y);
        }
    }
    public long fact(int x){
        if(x==1||x==0)    return 1;
        else return x*fact(x-1);
    }
}