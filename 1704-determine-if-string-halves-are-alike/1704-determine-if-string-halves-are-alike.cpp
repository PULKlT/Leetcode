class Solution {
public:
    bool halvesAreAlike(string s) {
        int a=0,b=0,n = s.size();
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(int i=0;i<n/2;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                a++;
        }
        for(int i=n/2;i<n;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                b++;
        }
        return (a==b);
        
    }
};