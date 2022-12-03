class Solution {
public:
    
    struct comp {
    template <typename T>
    bool operator()(const T& l,const T& r) const
        {
            if (l.second != r.second) {
                return l.second < r.second;
            }
            return l.first < r.first;
        }
    };
  
    string sort(map<char,int>& M)
    {
        string ret;
        set<pair<char, int>, comp> S(M.begin(),M.end());
            for (auto& it : S) {
                int i=it.second;
                while(i>0){
                    ret.push_back(it.first);
                    i--;
                }
            }
        return ret;
    }
    
    string frequencySort(string s) {
        map <char,int> mp;
        int n=s.size();
        set<int> st;
        
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        string ans = sort(mp);
        reverse(ans.begin(),ans.end());
        return ans;
        // for(auto it : mp)
        // {
        //     while(it.second>0){
        //         ans = ans+it.first;
        //     }
        // }
        // return ans;
    }
};