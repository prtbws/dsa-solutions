class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth,
                          int need1, int need2) {

        long long common = min(need1, need2);

        long long ans = common * min(costBoth, cost1 + cost2);

        if (need1 > need2) {
            long long remaining = need1 - need2;
            ans += remaining * min(cost1, costBoth);
        }
        else {
            long long remaining = need2 - need1;
            ans += remaining * min(cost2, costBoth);
        }

        return ans;
    }
};