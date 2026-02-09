class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int total=0;
        for(int i=0;i<n;i++){
            total=total+nums[i];
        }
        int left=0;
        for(int i=0;i<n;i++){
            int right=total-left-nums[i];
            if(left==right){
                return i;
            }
            left=left+nums[i];
        }
        return -1;
    }
};