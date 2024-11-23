//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int countFreq(vector<int>& nums, int target) {
        // code here
        int n = nums.size();
        int l =0 , h =n-1;
        int count=0;
        int first=-1,last=-1;

        while(l<=h){
            int mid =(l+h)/2;
            if(nums[mid]==target){
                first = mid;
                h = mid-1;
            } 

            else if(target>nums[mid]){
                l=mid+1;
                
            }
            else{
                h=mid-1;
            }
        }

      

         l =0 , h =n-1;
        while(l<=h){
            int mid =(l+h)/2;
            if(nums[mid]==target){
                last=mid;
                l = mid+1;
            } 

            else if(target>nums[mid]){
                l=mid+1;
                
            }
            else{
                h=mid-1;
            }
        }

       

        if(first == -1 || last == -1){
            return 0;
        }
        else{
            return (last-first)+1;
        }

    }
};




//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.countFreq(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends