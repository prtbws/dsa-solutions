class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {

        unordered_set<int>s(nums.begin(), nums.end());

        int n = nums.size();
        int i = 1;

        for (i = 1; i<=n+1; i++) {
            if (s.find(k*i) == s.end()) return k*i;
        }
        return -1;
    }
};