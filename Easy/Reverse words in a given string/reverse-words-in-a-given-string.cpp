//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    void myrev(string &s, int l, int r){
        while(l<r){
            swap(s[l++],s[r--]);
        }
    }
    string reverseWords(string S) 
    { 
        int start=0;
        for(int i=0; i<S.size(); i++){
            if(S[i] == '.'){
                myrev(S,start,i-1);
                start=i+1;
            }
            if(i==S.size()-1){
                myrev(S,start,i);
            }
        }
        myrev(S,0,S.size()-1);
        return S;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends