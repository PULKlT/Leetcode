class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());        
        int ans=0,i=0;
        while(i<=nums.size()-3)
        {
            if(nums[i+1]+nums[i+2]>nums[i])
            {
                ans=nums[i]+nums[i+1]+nums[i+2];
                break;
            }
            i++;
        }
        return ans;
    }
};