class Solution {
public:
    int longestPalindrome(string s) {
        map <char,int> mp;
        int count=0,odd=0;
        for(char i : s){
                mp[i]++;
        }
        for(auto it : mp){
            if(it.second%2==0)
                count+=it.second;
            else{
                count+=(it.second-1);
                odd=1;
            }
                
        }
        count += odd;
        return count;
    }
};