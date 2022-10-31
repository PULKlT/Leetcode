//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printDiamond(int n) {
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }
            for(int k=1;k<=i+1;k++){
                cout<<"* ";
            }
            cout<<"\n";
        }
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }
            for(int k=1;k<=i+1;k++){
                cout<<"* ";
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
        ob.printDiamond(n);
    }
    return 0;
}
// } Driver Code Ends