class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
         int n=candies.size();
       int maxi=*max_element(candies.begin(),candies.end());
       int  e=extraCandies;
       vector<bool>result;
       for(int i=0;i<n;i++){
    //    if(candies[i]+e>=maxi){
    //     result.push_back(true);
    //    }
    //    else{
    //     result.push_back(false);
    //    }
    result.push_back(candies[i]+e>=maxi);
       
    }
    return result;
    }
};