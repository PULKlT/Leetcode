class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]<=nums[i+1])
                continue;
            else if((i<n-2)&&(i>0)&&(nums[i-1]>nums[i+1])&&(nums[i]>nums[i+2]))
                return false;
            else{
                count++;
                if(count>1)
                    return false;
            }
        }
        return true;
    }
};