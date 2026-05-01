class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n=nums.size();
        int sum=0,f=0;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            f=f+i*nums[i];
        }
        int maxi=f;
        for(int k=1;k<n;k++){
            f=f+sum -n*nums[n-k];
          maxi=max(maxi,f);
        }
        return maxi;
        
    }
};