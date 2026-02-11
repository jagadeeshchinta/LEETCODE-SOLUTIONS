class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>jk;
        
        for(int i=0;i<nums1.size();i++){
        int x=nums1[i];
        int next=-1;
        int j;
        for( j=0;j<nums2.size();j++){
            if(nums2[j]==x){
                break;
            }
        }
        for(int k=j+1;k<nums2.size();k++){
           if(nums2[k]>x){
            next=nums2[k];
            break;
           }
        }
        jk.push_back(next);
        }
        return jk;
    }
};