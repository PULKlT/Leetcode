class Solution {
public:
    string getHint(string secret, string guess) {
        int x=0,y=0,n=secret.size();
        map <char,char> s,g;
        string ans;
        for(int i=0;i<n;i++)
        {
            if(secret[i]==guess[i])
            {
                x++;
                guess[i] = secret[i] = 'a';
            }
            else{
                s[secret[i]]++;
                g[guess[i]]++;
            }
        }
        
        for(auto i : s)
        {
            y = y + min(i.second,g[i.first]);
        }
        ans += to_string(x);
        ans.push_back('A');
        ans += to_string(y);
        ans.push_back('B');
        return ans;
    }
};