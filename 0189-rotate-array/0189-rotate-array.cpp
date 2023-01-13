class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if(n<k)    k=k%n;
        n=n-k;
        ::rotate(nums.begin(),nums.begin()+n,nums.end());
    }
};