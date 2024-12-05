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
  
    string postToPre(string post_exp) {
        // Write your code here
        stack<string> s;


    for (int i = 0; i < post_exp.length(); i++) {
        char c = post_exp[i];

        
        if (isalnum(c)) {
            s.push(string(1, c));
        }
        
        else if (isOperator(c)) {
            
            string operand1 = s.top(); 
            s.pop();
            string operand2 = s.top();
            s.pop();

            
            string prefix = c + operand2 + operand1;
            s.push(prefix);
        }
    }

    // The final result is the only element left in the stack
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
        cout << obj.postToPre(postfix) << endl;

        // cout << "~\n";
    
cout << "~" << "\n";
}
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends