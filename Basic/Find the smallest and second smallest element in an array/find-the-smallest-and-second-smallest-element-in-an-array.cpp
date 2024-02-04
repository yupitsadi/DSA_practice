//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) 
            cin >> a[i];

        vector<int> ans = minAnd2ndMin(a, n);
        if (ans[0] == -1)
            cout << -1 << endl;
        else 
            cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
// } Driver Code Ends

vector<int> minAnd2ndMin(int a[], int n) {
    vector<int> ans;
    int min=INT_MAX;
    int sec_min=INT_MAX-1;
    for(int i=0; i<n; i++){
        if(a[i]<min){
            sec_min = min;
            min = a[i];
        }
        else if(a[i]>min && a[i]<sec_min){
            sec_min=a[i];
        }
    }
    if (sec_min == INT_MAX)
        ans = {-1, -1};
    else
        ans = {min, sec_min};
     return ans;
}