class Solution {
public:
    string reverseWords(string s) {
        string ans;
        stack<string> st;
        for(int i=0;i<s.size();i++)
        {
            string  t="";
            if(s[i]!=' ')
            {
                while(i<s.size()&&s[i]!=' ')
                {
                    t=t+s[i];
                    i++;
                }
                st.push(t);                
            }            
        }
        ans+=st.top();
        st.pop();
        while(st.size())
        {
            ans = ans+" "+st.top();
            st.pop();
        }
        return ans;
    }
};