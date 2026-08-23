class Solution {
public:
    bool sumGame(string num) {
        int sum2 = 0, sum1 = 0;
        int c1 = 0, c2 = 0;
        int n = num.size();

        for (int i = 0; i<n/2; i++) {
            if (num[i] == '?') c1++;
            else sum1 += num[i]-'0';
        }

        for (int i = n/2; i<n; i++) {
            if (num[i] == '?') c2++;
            else sum2 += num[i]-'0';
        }

        if ((c1+c2)%2 == 1) return true;

        return 2*(sum1-sum2) != 9*(c2-c1);
    }
};