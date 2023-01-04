class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int ans=0,n=tasks.size();
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[tasks[i]]++;
        }
        for(auto i : mp)
        {
            if(i.second==1)
                return -1;
            if(i.second==2)
                ans++;
            int count = 0;
            count = i.second/3;
            int x = i.second%3;
            if((x==1||x==2)&&count>0)
                count++;
            ans+=count;
        }
        return ans;
    }
};