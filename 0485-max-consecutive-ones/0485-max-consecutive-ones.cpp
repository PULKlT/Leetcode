class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,maxim=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1)  count++;
            else{
                maxim = (count>maxim)?count:maxim;
                count=0; 
            }
        }
        maxim = (count>maxim)?count:maxim;
        return maxim;
    }
};