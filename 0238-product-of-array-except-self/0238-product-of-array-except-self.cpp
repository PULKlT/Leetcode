class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int mul=1;
        
        if(find(nums.begin(),nums.end(),0)!=nums.end()){
            for(int i=0;i<nums.size();i++){
                int mult=1;       
                for(int j=0;j<nums.size();j++){
                    if(i==j)    continue;
                    mult = mult * nums[j];
                    }
                ans.push_back(mult);
            }
            return ans;
        }
        
        for(int i=0;i<nums.size();i++){
            mul = mul * nums[i];
        }
        for(int j=0;j<nums.size();j++){
            ans.push_back(mul/nums[j]);
        }
        
        return ans;
    }
};