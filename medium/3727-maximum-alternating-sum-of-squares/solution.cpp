class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        vector<long long> sq(n);
        for (int i = 0; i < n; i++) {
            sq[i] = (long long)nums[i] * nums[i];
        }
        sort(sq.begin(), sq.end(), greater<long long>());

        int plus = (n + 1) / 2;   // number of positive slots
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            if (i < plus) ans += sq[i];   // largest squares get +
            else ans -= sq[i];            // smallest squares get -
        }
        return ans;
    }
};
