class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int rsum=0,lsum=0;
        int ans =-1;
        if(nums.size()==1)  return 0;
//         for(int i=1;i<nums.size();i++){
//             rsum+=nums[i];
//         }
//         for(int i=0;i<nums.size();i++){
//             if(lsum==rsum){
//                 return i;
//             }
//             lsum+=nums[i];
//             if(i+1==nums.size())
//                 rsum = 0;
//             else
//                 rsum-=nums[i+1];
            
//         }
        for(int i=0;i<nums.size();i++){
            // lsum = 
            if(accumulate(nums.begin(),nums.begin()+i,lsum)==accumulate(nums.begin()+i+1,nums.end(),rsum)){
                return i;
            }
        }
        return ans;
    }
};