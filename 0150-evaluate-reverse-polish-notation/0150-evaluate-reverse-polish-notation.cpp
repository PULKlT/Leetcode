class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        long long c,n = tokens.size();;
        for(int i=0;i<n;i++)
        {
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