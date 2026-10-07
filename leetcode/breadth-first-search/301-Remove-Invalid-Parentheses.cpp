class Solution {
public:
    unordered_set<string> st;

    void solve(string &s, int i, int l, int r, int bal, string &cur) {
        if (i == s.size()) {
            if (l == 0 && r == 0 && bal == 0)
                st.insert(cur);
            return;
        }

        if (s[i] != '(' && s[i] != ')') {
            cur += s[i];
            solve(s, i + 1, l, r, bal, cur);
            cur.pop_back();
            return;
        }

        if (s[i] == '(' && l > 0)
            solve(s, i + 1, l - 1, r, bal, cur);

        if (s[i] == ')' && r > 0)
            solve(s, i + 1, l, r - 1, bal, cur);

        cur += s[i];

        if (s[i] == '(') {
            solve(s, i + 1, l, r, bal + 1, cur);
        } 
        else if (bal > 0) {
            solve(s, i + 1, l, r, bal - 1, cur);
        }

        cur.pop_back();
    }

    vector<string> removeInvalidParentheses(string s) {
        int l = 0, r = 0;

        for (char c : s) {
            if (c == '(') {
                l++;
            } 
            else if (c == ')') {
                if (l > 0)
                    l--;
                else
                    r++;
            }
        }

        string cur;
        solve(s, 0, l, r, 0, cur);

        return vector<string>(st.begin(), st.end());
    }
};