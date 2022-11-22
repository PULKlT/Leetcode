//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<int> nearestPerfectSquare(int N) {
        vector<int> ans;
        long sq = sqrt(N);
        long x = sq+1;
        x*=x;
        sq*=sq;
        if((N-sq)<(x-N)){
            ans.push_back(sq);
            ans.push_back(N-sq);
        }
        else{
            ans.push_back(x);
            ans.push_back(x-N);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> ans = ob.nearestPerfectSquare(N);
        cout << ans[0] << " " << ans[1] << "\n";
    }
}
// } Driver Code Ends