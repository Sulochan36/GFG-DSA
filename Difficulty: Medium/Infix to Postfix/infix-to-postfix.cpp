//{ Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
    int priority(char op) {
        if (op == '+' || op == '-') {
            return 1;
        } 
        else if (op == '*' || op == '/') {
            return 2;
        } 
        else if (op == '^') {
            return 3;
        }
        else{
            return 0;
        }
    }
  
  
    // Function to convert an infix expression to a postfix expression.
    string infixToPostfix(string s) {
        // Your code here
        
        string ans = "";
        stack<char> st;
        
        
        for(char& c : s){
            if(isalnum(c)){
                ans += c;
            }
            
            else if(c == '('){
                st.push(c);
            }
            
            else if (c == ')'){
                while(!st.empty() && st.top()!='('){
                    ans += st.top();
                    st.pop();
                }
                st.pop();
            }
            
            else{
                while (!st.empty() && priority(st.top()) >= priority(c)) {
                    ans += st.top();
                    st.pop();
            }
                st.push(c);
            }
        }
        
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }   

    return ans;
        
        
    }
};


//{ Driver Code Starts.
// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--) {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends