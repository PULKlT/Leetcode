class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        vector<int> vec = intervals[0];
        if(intervals.size()==0)     return ans;
        
        for(int i=0;i<intervals.size()-1;i++)
        {
            if(intervals[i+1][0] <= vec[1])
            {
                if(vec[1]<intervals[i+1][1])
                    vec[1]=intervals[i+1][1];
            }
            else{
                ans.push_back(vec);
                vec = intervals[i+1];
            }                
        }
        ans.push_back(vec);
    return ans;
    }
};