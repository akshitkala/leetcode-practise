class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size(), ans=-1;
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int cd = 1, capacity = 0;
            for (int x : weights) {
                capacity += x;
                if (capacity > mid) {
                    capacity = x;
                    cd++;
                }
                if (cd > days)
                    break;
            }
            
            if (cd > days)
                low = mid + 1;
            else {
                ans=mid;
                high = mid - 1;
            }
        }
        return ans;
    }
};