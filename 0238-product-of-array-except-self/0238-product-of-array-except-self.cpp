class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    //    int n=nums.size();
    //     vector<int> array(n);
    //    for(int i=0;i<nums.size();i++){
    //      int sum=1;
    //      for(int j=0;j<nums.size();j++){
    //         if(i!=j){
    //           sum=sum*nums[j];
    //         }
    //      }
    //      array[i]=sum;
    //    } 
    //    return array;
        int n = nums.size();
        vector<int> result(n, 1);

        // Left product
        int left = 1;
        for(int i = 0; i < n; i++){
            result[i] = left;
            left *= nums[i];
        }

        // Right product
        int right = 1;
        for(int i = n - 1; i >= 0; i--){
            result[i] *= right;
            right *= nums[i];
        }

        return result;
    }
};
