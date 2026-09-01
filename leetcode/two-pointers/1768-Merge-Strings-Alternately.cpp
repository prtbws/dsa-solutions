class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        int n = word1.size(), m = word2.size();

        string ans = "";
        int i;
        for (i= 0; i< min(n,m); i++) {
            ans += word1[i];
            ans += word2[i];
        }
        
        ans += word1.substr(i,n-1);
        ans += word2.substr(i,m-1);
        
        return ans;
    }
};