class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[i+1])
                return nums[i];
        }
        // map <int,int> m;
        // for(int i = 0;i<nums.size();i++){
        //     m[nums[i]]++;
        //     if(m.at(nums[i])>1)
        //         return nums[i];
        // }
        return nums[0];
    }
};