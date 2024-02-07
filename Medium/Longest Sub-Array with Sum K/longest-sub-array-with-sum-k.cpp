//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        int len=0;;
        long long sum=0;
        map<long long,int> preMap;
        for(int i=0; i<N; i++){
            sum+=A[i];
            if(sum==K){
                len = max(len,i+1);
            }
            long long rem = sum-K;
            if(preMap.find(rem)!=preMap.end()){
                int len_t = i - preMap[rem];  
                len = max(len,len_t);
            }
            if(preMap.find(sum)==preMap.end()){
                preMap[sum]=i;
            }
            
        }
        return len;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends