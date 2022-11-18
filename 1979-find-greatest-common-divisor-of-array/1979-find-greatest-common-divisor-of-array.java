class Solution {
    public int findGCD(int[] nums) {
        int max = nums[0];
        int min = nums[0];
        for(int i=0;i<nums.length;i++){
            if(nums[i]<min)
                min = nums[i];
            if(nums[i]>max)
                max = nums[i];
        }
        int rem = 0;
        do
        {
            rem=max%min;
            max = min;
            min = rem;
        }while(rem!=0);
        return max;
    }
}