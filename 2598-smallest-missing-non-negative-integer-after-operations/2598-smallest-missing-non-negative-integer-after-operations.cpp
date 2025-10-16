class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        unordered_map<int, int> cnt;
        for (int x : nums) {
            int r = ((x % value) + value) % value; // handle negatives correctly
            cnt[r]++;
        }

        for (int i = 0; ; i++) {
            int r = i % value;
            if (cnt[r] == 0)
                return i;
            cnt[r]--;
        }
    }
};
