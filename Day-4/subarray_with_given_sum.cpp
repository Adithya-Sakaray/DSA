//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
     {
        vector<int> v;
        int j=0,i=0;
        long long curr_sum=0;
        while(i<n && j<n)
        {
            if(j>i)
            {
                i=j;
                curr_sum=0;
            }
            else if(arr[i]+curr_sum < s)
            {
                curr_sum+=arr[i];
                i++;
            }
            else if(arr[i]+curr_sum>s)
            {
                curr_sum-=arr[j];
                j++;
            }
            else
            {
                v.push_back(++j);
                v.push_back(++i);
                return v;
            }
        }
        v.push_back(-1);
        return v;
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends