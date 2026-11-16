class Solution {
public:

    string digk(string s, int k) {

        string ans ="";

        for (int i = 0; i<s.size(); i+=k) {

            int sum = 0;

            for (int j = i; j<i+k && j<s.size(); j++) {

                sum += s[j]-'0';
            }
            ans += to_string(sum);
        }
        return ans;
    }

    string digitSum(string s, int k) {
        
        if (s.size() <= k) {

            return s;
        }

        return digitSum(digk(s, k), k);
    }
};