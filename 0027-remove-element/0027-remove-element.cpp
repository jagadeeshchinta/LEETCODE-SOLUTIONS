class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> a;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
               a.push_back(nums[i]);
            }
        }
        nums=a;
        return a.size();
    }
};