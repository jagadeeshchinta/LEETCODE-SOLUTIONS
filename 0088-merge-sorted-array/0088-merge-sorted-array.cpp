class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int n1=nums1.size(),n2=nums2.size();
        int n3=m+n;
        vector<int> array(n3);
        for(int i=0;i<m;i++){
            array[i]=nums1[i];
        }
        for(int i=0;i<n;i++){
            array[m+i]=nums2[i];
        }
        sort(array.begin(),array.end());
        for(int i=0;i<n3;i++){
            nums1[i]=array[i];
        }
    }
};