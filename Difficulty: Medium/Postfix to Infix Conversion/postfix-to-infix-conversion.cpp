//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    bool isOperator(char c) {
        return (c == '+' || c == '-' || c == '*' || c == '/');
    }
  
    string postToInfix(string exp) {
        // Write your code here
        stack<string> s;
        
        for(int i=0;i<exp.length();i++){
            char curr = exp[i];
            if(isOperator(curr)){
                string op1 = s.top();
                s.pop();
                string op2 = s.top();
                s.pop();
                string expr = "(" + op2  + curr +  op1 + ")";
                s.push(expr);
            }
            else if(isalnum(curr)){
                s.push(string(1,curr));
            }
        }
        return s.top();
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string postfix;
        cin >> postfix;
        // char marker; cin >> marker;

        Solution obj;
        cout << obj.postToInfix(postfix) << endl;

        // cout << "~\n";
    
cout << "~" << "\n";
}
    fclose(stdout);

    return 0;
}

// } Driver Code Ends