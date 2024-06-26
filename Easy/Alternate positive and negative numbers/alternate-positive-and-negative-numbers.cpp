//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    vector<int> p;
	    vector<int> ng;
	    for(int i=0;i<n;i++){
	        if(arr[i]>=0){
	            p.push_back(arr[i]);
	        }
	        
	        if(arr[i]<0){
	            ng.push_back(arr[i]);
	        }
	    }
	    
	    int i=0,j=0,k=0;
	    
	    while(j<p.size() && k<ng.size()){
	        arr[i++]=p[j++];
	        arr[i++]=ng[k++];
	    }
	    
	    while(j<p.size()){
	        arr[i++]=p[j++];
	    }
	    
	    while(k<ng.size()){
	        arr[i++]=ng[k++];
	    }
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends