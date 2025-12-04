class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int sum=0;
        int c=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            // if(nums[i]%3!=0){
            //     nums[i]=nums[i]-1;
            // }
            // nums[i]=nums[i]+1;
            // c++;
            if(nums[i]%3!=0){
                c++;
            }
        }
        return c;
    }
};