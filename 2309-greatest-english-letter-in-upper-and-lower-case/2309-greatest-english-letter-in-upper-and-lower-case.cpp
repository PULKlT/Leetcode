class Solution {
public:
    string greatestLetter(string s) {
        string ans = "";
        map<char,int> mpp;
        for(int i=0;i<s.length();i++)
        {
            mpp[s[i]]++;
        }
        for(char i='z';i>='a';i--)
        {
            if(mpp[i]>=1&&mpp[i-32]>=1)
            {    ans=toupper(i);    break;  }
        }
        
        
        return ans;
    }
};