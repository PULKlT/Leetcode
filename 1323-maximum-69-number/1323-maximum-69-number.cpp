class Solution {
public:
    int maximum69Number (int num) {
        
        int n=num;
        int rem;
        vector<int> vec;
        while(n>0){
            rem = n%10;
            vec.push_back(rem);
            n = n/10;
        }
        n = vec.size();
        int ans=0;
        int flag=0;
        reverse(vec.begin(),vec.end());
        for(int i=0;i<n;i++){
            if(flag==0&&vec[i]==6){
                vec[i]=9;
                flag=1;
            }
            ans = ans + vec[i] * pow(10,(n-i-1));
        }
        return ans;
        
    }
};