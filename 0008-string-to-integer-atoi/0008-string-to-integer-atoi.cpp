class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.size();
        bool neg = false;
        long long ans = 0;

        while (i < n && s[i] == ' ') {
            i++;
        }

        if (i < n && (s[i] == '+' || s[i] == '-')) {
            neg = (s[i] == '-');
            i++;
        }

        for (; i < n; i++) {
            if (s[i] < '0' || s[i] > '9') {
                break;
            }

            ans = ans * 10 + (s[i] - '0');

            if (neg && ans >= 2147483648LL) {
                return INT_MIN;
            }

            if (!neg && ans >= INT_MAX) {
                if (ans >= INT_MAX) return INT_MAX;
            }
        }

        return neg ? -(int)ans : (int)ans;
    }
};