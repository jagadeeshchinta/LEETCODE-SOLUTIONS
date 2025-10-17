class Solution {
public:
    int n, k;
    string s;
    // dp[i][used][mask] = maximum partitions from index i onwards
    unordered_map<long long, int> memo;

    int countBits(int x) {
        return __builtin_popcount(x);
    }

    int dfs(int i, bool used, int mask) {
        if (i == n) return 0;

        long long key = ((long long)i << 27) | (used << 26) | mask;
        if (memo.count(key)) return memo[key];

        int ans = 0;

        // Option 1: don't change s[i]
        int bit = 1 << (s[i] - 'a');
        int newMask = mask | bit;
        if (countBits(newMask) > k) {
            // must start a new partition
            ans = 1 + dfs(i + 1, used, bit);
        } else {
            ans = dfs(i + 1, used, newMask);
        }

        // Option 2: use change here (if not yet used)
        if (!used) {
            for (int c = 0; c < 26; ++c) {
                if (c == s[i] - 'a') continue;
                int newBit = 1 << c;
                int mask2 = mask | newBit;
                int cur;
                if (countBits(mask2) > k) {
                    cur = 1 + dfs(i + 1, true, newBit);
                } else {
                    cur = dfs(i + 1, true, mask2);
                }
                ans = max(ans, cur);
            }
        }

        return memo[key] = ans;
    }

    int maxPartitionsAfterOperations(string s, int k) {
        this->s = s;
        this->k = k;
        this->n = s.size();
        memo.clear();
        return dfs(0, false, 0) + 1; // +1 for the first partition
    }
};