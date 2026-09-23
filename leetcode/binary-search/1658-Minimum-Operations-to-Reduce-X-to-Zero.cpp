class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        long long sum =  0;
        for (int i : nums) sum+= i;

        long long target = sum-x;

        int i = 0;
        long long total = 0;

        int maxLen =-1;

        for ( int j = 0; j<nums.size(); j++) {
            total += 1LL*nums[j];

            while(total > target && i<=j) {
                total -= nums[i];
                i++;
            }

            if(total == target) {
                maxLen = max(maxLen, j-i+1);
            }
        }

        return maxLen == -1 ? -1 : nums.size()-maxLen;
    }
};