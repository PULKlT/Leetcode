class Solution {
public:
    int isTriangle(int a, int b, int c){
        if(a+b>c&&a+c>b&&b+c>a)
            return 1;
        else
            return 0;
    }
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());        
        int i=0,ans=0;
        while(i<=nums.size()-3)
        {
            if(isTriangle(nums[i],nums[i+1],nums[i+2]))
            {
                ans=nums[i]+nums[i+1]+nums[i+2];
                break;
            }
            i++;
        }
        return ans;
    }
};