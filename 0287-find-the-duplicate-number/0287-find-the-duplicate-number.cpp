class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0], fast = nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);
        
        fast=nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
        
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==nums[i+1])
        //         return nums[i];
        // }
        
        // map <int,int> m;
        // for(int i = 0;i<nums.size();i++){
        //     m[nums[i]]++;
        //     if(m.at(nums[i])>1)
        //         return nums[i];
        // }
        // return nums[0];
    }
};