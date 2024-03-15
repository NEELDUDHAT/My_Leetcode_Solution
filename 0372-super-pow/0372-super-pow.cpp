class Solution {
public:
    int power(int x, int y, int mod) {
        long long result = 1;
        long long base = x % mod;
        while (y > 0) {
            if (y & 1) {
                result = (result * base) % mod;
            }
            base = (base * base) % mod;
            y >>= 1;
        }
        return result;
    }

    int superPow(int a, vector<int>& b) {
        if (a == 1) {
            return 1;
        }
        int ans = 1; // Initialize ans with 1 instead of 0
        int mod = 1337;
        for (int i = 0; i < b.size(); i++) {
            ans = power(ans, 10, mod) * power(a, b[i], mod) % mod;
        }
        return ans;
    }
};
