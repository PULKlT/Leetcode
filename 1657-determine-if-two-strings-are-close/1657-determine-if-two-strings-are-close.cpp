class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int m=word1.size();
        int n=word2.size();
        if(m!=n)   return false;
        map<char,int> mp1,mp2;
        vector<int> v1,v2;
        set<char> s1,s2;
        
        for(int i=0;i<m;i++)
        {
            // if(mp1.find(word1[i])==mp1.end())
            //     mp1.insert({word1[i],1});
            // else
                mp1[word1[i]]++;
        }
        
        for(int i=0;i<n;i++)
        {
            // if(mp2.find(word2[i])==mp2.end())
            //     mp2.insert({word2[i],1});
            // else
                mp2[word2[i]]++;
        }
        for(auto it : mp1)
        {
            s1.insert(it.first);
            v1.push_back(it.second);
        }
        for(auto it : mp2)
        {
            s2.insert(it.first);
            v2.push_back(it.second);
        }
        if(s1!=s2)  return false;
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        for(int i=0;i<v1.size();i++){
            if(v1[i]!=v2[i])
                return false;
        }
        return true;
    }
};