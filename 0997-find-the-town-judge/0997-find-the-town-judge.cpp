class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int max =0;
        set<int> st;
        map<int,int> mp;
        if (n==1)   return 1;
        for(auto i : trust){
            st.insert(i[0]);
            mp[i[1]]++;
        }
        for(auto i : mp)
        {
            if(i.second==st.size()&&i.second==n-1)
                return i.first;
        }
        return -1;
        
        
    }
};