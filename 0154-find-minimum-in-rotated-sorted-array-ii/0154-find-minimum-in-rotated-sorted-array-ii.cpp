class Solution {
public:
    int findMin(vector<int>& nums) {
        int mid,lo=0,hi=nums.size()-1;
        
        while(lo<hi){
            mid = lo+(hi-lo)/2;
            if(nums[mid]==nums[hi]){
                hi--;
                continue;
            }
            if(nums[mid]<=nums[hi]){
                hi = mid;
            }
            else{
                lo=mid+1;
            }
        }
        return nums[lo];
        // return *min_element(nums.begin(),nums.end());
    }
};