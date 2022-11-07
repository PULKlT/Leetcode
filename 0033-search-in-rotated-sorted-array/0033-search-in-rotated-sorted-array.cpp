class Solution {
public:
    int search(vector<int>& nums, int target) {
        int mid,lo=0,hi=nums.size()-1;
        
        while(lo<=hi){
            mid = lo + (hi-lo)/2;
            cout<<nums[mid]<<" ";
            if(nums[mid]==target)
                return mid;
            else if(nums[lo]<=nums[mid])
            {
                if(target>=nums[lo]&&target<=nums[mid])
                    hi=mid-1;
                else
                    lo = mid+1;
            }
            else //arr[mid]<arr[hi]
            {
                if(target>=nums[mid]&&target<=nums[hi])
                    lo=mid+1;
                else
                    hi=mid-1;
            }            
        }
        return -1;
    }
};