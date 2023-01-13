class Solution {
public:
    
    // bool Pal(string s,int i,int j)
    // {
    //     if(i>=j)
    //         return true;
    //     if(s[i]!=s[j])
    //         return false;
    //     else
    //         return Pal(s,i+1,j-1);
    // }
    bool isPalindrome(string s) {
        string st;
        int i=0,j=s.size()-1;
        for(auto i:s)
        {
            if(isalnum(i))
                st.push_back(tolower(i));
        }
        string str = st;
        reverse(str.begin(),str.end());
        return(st==str);
            // return Pal(st,0,st.size()-1);
        
        // for(i=0;i<=j;i++){
        //     while(!isalnum(s[i])&&i<j) i++;
        //     if(i==j)
        //         return true;
        //     while(!isalnum(s[j])&&j>0) j--;
        //     char x=tolower(s[i]),y=tolower(s[j]);
        //     // cout<<x<<" "<<y<<endl;
        //     if(x!=y)
        //         return false;
        //     j--;
        // }
        // return true;
    }
};