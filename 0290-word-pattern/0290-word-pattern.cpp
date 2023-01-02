class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int i=0;        
        map <char,string> mp;
        map <string,char> mp2;
        int sp=0;
        for(char c : pattern)
        {
            string x;
            while(s[i]!=' '&&i<s.size())
            {
                x.push_back(s[i++]);
            }
            if(s[i]==' ')   sp++;
            i++;
            if(mp.find(c)==mp.end())
                mp[c]=x;
            else if(mp[c]!=x)
                return false;
            if(mp2.find(x)==mp2.end())
                mp2[x]=c;
            else if(mp2[x]!=c)
                return false;
        }
        if(i<s.size()) return false;
        if(sp+1!=pattern.size())    return false;
        return true;
    }
};