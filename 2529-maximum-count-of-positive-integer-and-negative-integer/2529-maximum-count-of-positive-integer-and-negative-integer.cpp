class Solution {
public:
    int maximumCount(vector<int>& nums) {
        vector<int> neg;
        vector<int> pos;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);
            }
            if(nums[i]>0){
                pos.push_back(nums[i]);
            }
        }
        return max(neg.size(),pos.size());
    }
};