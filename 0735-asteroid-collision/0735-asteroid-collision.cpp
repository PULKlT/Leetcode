class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;
        int n=asteroids.size();
        stack<int> st;
        for(int i : asteroids)
        {
            if(i>0 || (i<0 && st.empty()) || (i==st.top()) ){
                st.push(i);
                continue;
            }
            if(st.top()<0 ){
                st.push(i);
                continue;
            }
            if(i<0 && st.top()>abs(i))  continue;
            if(i<0 && st.top()==abs(i))  st.pop();
            else //if(i<0 && st.top()<abs(i))
            {
                while((!st.empty()) && (st.top()<=abs(i)))
                {
                    if(st.top()==abs(i)){
                        st.pop();
                        goto br;
                    }
                    if(st.top()<0){
                        st.push(i);
                        break;
                    }
                    st.pop();
                }
                if(st.empty())
                    st.push(i);                    
            }
            br:
            ;
        }
        
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};