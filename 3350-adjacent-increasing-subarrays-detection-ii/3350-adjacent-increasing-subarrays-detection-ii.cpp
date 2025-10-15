class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int ans = 0;
        int pre = 0;     // length of previous increasing segment
        int cur = 0;     // length of current increasing segment
        
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            cur++;
            // If this is the end of the current strictly increasing segment:
            if (i == n - 1 || nums[i] >= nums[i + 1]) {
                // Option 1: split this segment into two adjacent parts
                ans = max(ans, cur / 2);
                // Option 2: use suffix of previous + prefix of current
                ans = max(ans, min(pre, cur));
                
                // prepare for next segment
                pre = cur;
                cur = 0;
            }
        }
        return ans;
    }
};
