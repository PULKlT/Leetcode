class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        
        map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
            if(m[nums[i]]>nums.size()/3)
                if(find(ans.begin(),ans.end(),nums[i])==ans.end())
                    ans.push_back(nums[i]);
        }
        return ans;
    }
};