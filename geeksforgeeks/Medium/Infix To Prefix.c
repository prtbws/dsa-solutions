class Solution {
  public:
  
    void reverse(string &s) {
        int n = s.size();
        
        for (int i = 0; i<n/2; i++) {
            
            char t = s[i];
            s[i] = s[n-1-i];
            s[n-1-i] = t;
        }
    }
    
    void changeBrackets(string& s) {
        
        for (char &c : s) {
            if (c == '(') c = ')';
            else if (c == ')') c= '(';
        }
    }
    
    int order(char c) {
        
        if (c == '^') return 3;
        if (c == '/' || c == '*') return 2;
        if (c == '+' || c == '-') return 1;
        
        return 0;
    }
    
    string infixToPostfix(string& s) {
        
        stack<char>st;
        string ans;
        
        for (char &c : s) {
            
            if (isalnum(c)) ans+=c;
            else if (c == '(') st.push(c);
            else if (c == ')') {
                
                while(!st.empty() && st.top() != '(') {
                    ans += st.top();
                    st.pop();
                }
                st.pop();
                
            } else {
                
                while(
                    !st.empty() && 
                    st.top() != '(' && 
                    (order(st.top()) > order(c) ||
                     (order(st.top()) == order(c) && c == '^'))
                ) {
                    ans+=st.top();
                    st.pop();
                }
                
                st.push(c);
            }
        }
        
        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }
        
        return ans;
    }
        
    string infixToPrefix(string &s) {
        // code here
        
        string ans;
        
        reverse(s);
        changeBrackets(s);
        ans = infixToPostfix(s);
        reverse(ans);
        
        return ans;
    }
};
