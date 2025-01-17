//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        // code here
        int product=1;
        int nonzeroproduct=1;
        int zerocount =0;
        int result;
        vector<int> res;
        for(int i=0;i<arr.size();i++){
            product = product * arr[i];
            
            if(arr[i]==0){
                zerocount++;
            }
            
            if(arr[i]!=0){
                nonzeroproduct *= arr[i];
            }
        }
        
        for(int i = 0;i<arr.size();i++){
            if(arr[i]==0 && zerocount==1){
                res.push_back(nonzeroproduct);
            }
            
            else{
                if(arr[i]==0 && zerocount>1){
                    result = 0;
                    res.push_back(0);
                }
                else{
                    result = (product/arr[i]);
                    res.push_back(result);
                }
                
            }
            
        }
        return res;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;

        while (ss >> number) {
            arr.push_back(number);
        }

        Solution obj;
        vector<int> res = obj.productExceptSelf(arr);

        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends