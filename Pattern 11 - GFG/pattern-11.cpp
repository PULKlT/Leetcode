//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        int a=1;
        for(int i=1;i<=n;i++){
            if(i%2==0)  a=0;
                else    a=1;
            for(int k=1;k<=i;k++){
                cout<<a<<" ";
                if(a%2==0)  a=1;
                else        a=0;
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