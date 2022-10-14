class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // MOORE'S VOTING ALGORITHM
        int count = 0, candidate = 0;
        for(int num : nums){
            if(count==0){
                candidate = num;
            }
            if(candidate == num)
                count++;
            else    count--;
        }
        return candidate;
        
        // map<int,int> m;
        // for(int i=0;i<nums.size();i++)
        // {
        //     m[nums[i]]++;
        //     if(m[nums[i]]>nums.size()/2)
        //         return nums[i];
        // }
        // return nums[0];
    }
};