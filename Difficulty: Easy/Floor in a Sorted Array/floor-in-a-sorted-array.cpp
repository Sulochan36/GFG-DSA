//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
  int bSearch(vector<int>& nums,int low , int high,int target,int f){
        if(low>high){
            return f;
        }
        
       int mid = (low+high)/2;


    
         if(nums[mid]==target){
            return mid;
        }

        else if(target>nums[mid]){
            return bSearch(nums,mid+1,high,target,mid);
        }

        else{
            return bSearch(nums,low,mid-1,target,f);
        }
 
       
    }

    int findFloor(vector<int>& arr, int k) {

        // Your code here
       return bSearch(arr,0,arr.size()-1,k,-1);
    }
};


//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        int ans = ob.findFloor(arr, k);

        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends