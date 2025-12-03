class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int max=nums[0];
        int ind=0;
        for(int i=0;i<n;i++){
            if(nums[i]>max){
              max=nums[i];
              ind=i;
              }
              }
           return ind;
    }
};