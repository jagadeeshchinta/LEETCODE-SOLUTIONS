class Solution {
public:
    bool containsDuplicate(vector<int>& arr) {
        unordered_map<int,int>freq;
        for(int x:arr){
            freq[x]++;
        }
        for(int x:arr){
            if(freq[x]>1){
                return true;
            }
        }
        return false;
    }
};