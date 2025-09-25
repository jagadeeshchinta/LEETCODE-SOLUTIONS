class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int x=(n*(n+1))/2;
        int ini=0;
        for(int i=0;i<n;i++){
            ini=ini+nums[i];
        }
        return x-ini;
        
    }
};