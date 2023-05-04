//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int findMissing(int arr[], int n) {
        
        long long int actual_sum = (n+1)*((arr[0] + arr[n-1])/2.0);
        
        long long int false_sum=0;
        
        for(int i=0;i<n;i++){
            false_sum += arr[i];
        }
        
        long long int r = actual_sum - false_sum;
        //cout<<actual_sum<<" "<<false_sum<<" "<<n+1<<" "<<(arr[0] + arr[n-1])/2<<endl;
        return r;
        
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMissing(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends