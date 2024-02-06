//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // map<int,int> mapp;
        // for(int i=0; i<=n; i++){
        //     mapp[array[i]]++;
        // }
        // for (int i = 1; i <= n; i++) {
        // if (mapp[i] == 0) {
        //     return i;
        // }
    int sum=0;
    for(int i=0;i<array.size();i++){
        sum+=array[i];
    }
    int final=(n*(n+1))/2;
    
    return final-sum;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends