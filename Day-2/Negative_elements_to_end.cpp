//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        int pos=0,neg=0;
        // Your code goes here
        for(int i=0;i<n;i++){
            if(arr[i]>=0){
                pos += 1;
            }
            else{
                neg += 1;
            }
        }
        
        int posa[pos],nega[neg];
        int posi=0,negi=0;
        
        for(int i=0;i<n;i++){
            if(arr[i]>=0){
                posa[posi] = arr[i];
                posi += 1;
            }
            else{
                nega[negi] = arr[i];
                negi += 1;
            }
        }
        
        
        int t=0;
        for(int i=0;i<n;i++){
            if(i<pos){
                arr[i] = posa[i];
            }
            else{
                arr[i] = nega[t];
                t+=1;
            }
        }
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends