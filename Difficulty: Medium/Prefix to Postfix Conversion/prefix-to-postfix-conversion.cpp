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
  
    string preToPost(string pre_exp) {
        
         stack<string> s;

    
    for (int i = pre_exp.length() - 1; i >= 0; i--) {
        char c = pre_exp[i];

        
        if (isalnum(c)) {
            s.push(string(1, c));
        }
        
        else if (isOperator(c)) {
            
            string operand1 = s.top(); s.pop();
            string operand2 = s.top(); s.pop();

           
            string postfix = operand1 + operand2 + string(1, c);
            s.push(postfix);
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
        string prefix;
        cin >> prefix;

        Solution obj;
        cout << obj.preToPost(prefix) << endl;

        // cout << "~\n";
    
cout << "~" << "\n";
}
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends