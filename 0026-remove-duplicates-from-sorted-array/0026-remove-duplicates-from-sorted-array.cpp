class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==NULL)
            return 1;
        int i=0,j=1;
        while(j<nums.size()){
            if(nums[i]==nums[j]){
                j++;
                continue;
            }
            else{
                nums[i+1]=nums[j];
                i++;
            }
        }
        return i+1;
    }
};