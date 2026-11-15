class Solution {
public:

    using ll = long long;
    int numOfSubarrays(vector<int>& arr) {
        
        ll odd = 0;
        ll even = 1;
        ll ans = 0;
        ll sum = 0;

        for (int x : arr) {

            sum += x;

            if (sum%2 == 0) {
                ans += odd;
                even++;

            } else {
                ans += even;
                odd++;
            }
        }

        return ans%(1000000007);
    }
};