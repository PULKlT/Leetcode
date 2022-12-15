class Solution {
public:
    int longestCommonSubsequence(string a, string b) {
        // int x = text1.size(), y = text2.size();
        // vector<vector<int>> 
            // short DP[1001][1001] = {};
        
         // short m[1001][1001] = {};
        // for (int i = 0; i < text1.size(); ++i)
        //     for (int j = 0; j < text2.size(); ++j)
        //     {
        //         if(DP[i] == DP[j])
        //             DP[i + 1][j + 1] = DP[i][j] + 1;
        //         else
        //             DP[i + 1][j + 1] = max(DP[i + 1][j], DP[i][j + 1]);
        //     }
                // DP[i + 1][j + 1] = DP[i] == DP[j] ? DP[i][j] + 1 : max(DP[i + 1][j], DP[i][j + 1]);    
        // for(int i=1;i<=text1.size();i++)
        //     for(int j=1;j<=text2.size();j++)
        //     {
        //         if(DP[i-1]==DP[j-1])
        //         DP[i][j] = DP[i-1][j-1] + 1;
        //         else
        //         DP[i][j] = max(DP[i][j-1],DP[i-1][j]);
        //     }
         short m[2][1000] = {};
    for (int i = 0; i < a.size(); ++i)
        for (int j = 0; j < b.size(); ++j)
            m[!(i % 2)][j + 1] = a[i] == b[j] ? m[i % 2][j] + 1 : max(m[i % 2][j + 1], m[!(i % 2)][j]);
    return m[a.size() % 2][b.size()];
        
        // return DP[x][y];
    }
};