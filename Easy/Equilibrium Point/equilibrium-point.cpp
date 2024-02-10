//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        if (n == 1)
        return 1;
        int forward[n] = { 0 };
        int rev[n] = { 0 };
        forward[0]=a[0];
        rev[n-1]=a[n-1];
        for (int i = 1; i < n; i++) {
            forward[i] = forward[i - 1] + a[i];
        }
        for (int i = n - 2; i >= 0; i--) {
            rev[i] = rev[i + 1] + a[i];
        }
        for (int i = 0; i < n; i++) {
        if (forward[i] == rev[i]) {
            return ++i;
            }
        }
        return -1;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends