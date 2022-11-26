class Solution {
public:
//     bool h(string s,string t){
//         map<char,char> mp;
        
//         for(int i=0;i<s.size();i++){
//             if(mp.find(s[i])!=mp.end())    
//             {
//                 if(mp[s[i]]!=t[i])    return false;
//             }    
//             else    mp[s[i]]=t[i];
//         }
//         return true;
//     }
    bool isIsomorphic(string s, string t) {
        // return h(s,t)&&h(t,s);
        int m1[256] = {0}, m2[256] = {0}, n = s.size();
        for (int i = 0; i < n; ++i) {
            if (m1[s[i]] != m2[t[i]]) return false;
            m1[s[i]] = i + 1;
            m2[t[i]] = i + 1;
        }
        return true;
    }
};