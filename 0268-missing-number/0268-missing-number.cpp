class Solution {
public:
    int missingNumber(vector<int>& arr) {
       

        int  n = arr.size();
        
        
      //  long n=arr.size();
        int x=((n)*(n+1))/2;
        
        int sum=0;
        
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
        }

        return x- sum ;
        
    }
};