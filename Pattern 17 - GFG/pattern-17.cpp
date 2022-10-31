//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        for(int i=1;i<=n;i++){
            char a='A';
            for(int j=1;j<=n-i;j++){
                cout<<" ";
            }
            for(int k=1;k<=i;k++){
                cout<<a++;
            }
            a--;
            for(int l=1;l<=i-1;l++){
                cout<<--a;
            }
            cout<<"\n";
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends