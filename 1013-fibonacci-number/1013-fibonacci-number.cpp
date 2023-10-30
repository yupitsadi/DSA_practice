class Solution {
public:
    int fib(int n) {
        int first=0;
        int sec=1;
        int sum;
        for(int i=0; i<n-1; i++){
            sum=first+sec;
            first = sec;
            sec = sum;
        }
        return sum;
    }
};