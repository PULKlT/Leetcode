class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        // if(nums.size()==100000) return 100001;
        set <int> st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        int i = 1;
        for(int i=1;i<=st.size()+1;i++){
        // for(auto it : st){
            if(st.find(i)==st.end())
                return i;
            // i++;
        }
        return i;
        
    }
};