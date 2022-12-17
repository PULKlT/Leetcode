class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int n = tokens.size();
        long long c;
        for(int i=0;i<n;i++)
        {
            // cout<<tokens[i][0]<<" ";
            if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/")
            {
                long long a = st.top();   st.pop();
                long long b = st.top();   st.pop();
                if(tokens[i]=="+")  c = a+b;
                if(tokens[i]=="-")  c = b-a;
                if(tokens[i]=="*")  c = a*b;
                if(tokens[i]=="/")  c = b/a;
                st.push(c);
            }
            else
                st.push(stoi(tokens[i]));
        }
        return st.top();
    }
};