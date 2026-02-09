class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       vector<int>t;
       int n=nums.size();
       for(int i=0;i<n;i++){
        if(nums[i]!=0){
            t.push_back(nums[i]);
        }
     }
     int m=t.size();
     for(int i=0;i<m;i++){
        nums[i]=t[i];
     }
     for(int i=m;i<nums.size();i++){

        nums[i]=0;
     }

    }
};