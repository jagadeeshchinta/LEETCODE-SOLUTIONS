class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       for(int i=0;i<nums.size();i++){
        if(nums[i]>=target){
            return i;
        }
    //     else{
    //         nums.push_back(target);
    //         sort(nums.begin(),nums.end());
    //         return i;
    //     }
    //    } 
    //   return -1;
    }
    return nums.size();
}
};