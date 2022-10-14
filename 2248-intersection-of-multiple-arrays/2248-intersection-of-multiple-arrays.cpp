class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map <int,int> m;
        vector <int> vec;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[i].size();j++){
                m[nums[i][j]]++;
                if(m[nums[i][j]]==nums.size())
                    vec.push_back(nums[i][j]);
            }
        }
        sort(vec.begin(),vec.end());
        return vec;
    }
};