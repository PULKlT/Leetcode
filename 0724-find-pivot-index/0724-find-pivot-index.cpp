class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int rsum=0,lsum=0;
        int ans =-1;
        if(nums.size()==1)  return 0;
        for(int i=1;i<nums.size();i++){
            rsum+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(lsum==rsum){
                return i;
                break;
            }
            lsum+=nums[i];
            if(i+1==nums.size())
                rsum = 0;
            else
                rsum-=nums[i+1];
            
        }
        return ans;
    }
};