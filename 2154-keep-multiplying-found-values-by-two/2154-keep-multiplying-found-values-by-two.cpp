class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        // int sum;
        int n=nums.size();
       
       while(true){
         int sum=0;
        for(int i=0;i<n;i++){
            if(nums[i]==original){
             sum=1;
             break;
            }
            }
            if(sum==1){
                original*=2;
            }
            else{
                break;
            }
        }
        return original;
    }
};