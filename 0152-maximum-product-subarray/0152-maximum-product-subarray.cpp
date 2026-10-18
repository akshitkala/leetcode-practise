class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = nums[0], prefix = 1;

        for (int i : nums) {
            prefix *= i;
            ans = max(ans, prefix);

            if (prefix == 0) prefix = 1;
        }

        int suffix = 1;

        for (int i = nums.size() - 1; i >= 0; i--) {
            suffix *= nums[i];
            ans = max(ans, suffix);

            if (suffix == 0) suffix = 1;
        }

        return ans;
    }
};