//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        vector<int> ans;
        int a=0,b=0;
        sort(arr.begin(),arr.end());
        
        for(int i=0;i<n-1;i++){
            
            if(arr[0]!=1){
                b=1;
            }
            
            
            if(arr[i]-arr[i+1]==0){
                a = arr[i];
            }
            
            if(arr[i+1]-arr[i]>1){
                b= arr[i]+1;
            }
            
            if(arr[n-1]!=n){
                b=n;
            }
        }
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends