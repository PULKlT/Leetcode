class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        // map <int,int> mp;
        // set <int> st;
        // for(int i=0;i<arr.size();i++){
        //     if(mp.find(arr[i])==mp.end())
        //         mp[arr[i]]=1;
        //     else
        //         mp[arr[i]]++;
        // }
        // for(auto it : mp)     st.insert(it.second);
        // return (st.size()==mp.size());
        
        unordered_map<int, int> m;
        unordered_set<int> s;
        for (auto n : arr) ++m[n];
        for (auto& p : m) s.insert(p.second);
        return m.size() == s.size();
    }
};