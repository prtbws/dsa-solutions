class Solution {
public:
    int minAddToMakeValid(string s) {
        int cnt = 0;
        int ans = 0;

        for (char c : s) {
            if (c == '(') cnt++;
            else {
                cnt--;
                if (cnt<0) {
                    ans ++;
                    cnt = 0;
                }

            }
        } 
        ans += cnt;
        return ans;
    }
};