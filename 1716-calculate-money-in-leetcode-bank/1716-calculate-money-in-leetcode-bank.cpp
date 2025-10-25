class Solution {
public:
    int totalMoney(int n) {
      int sum=0;
      int monday=1;
      int current=monday;
      for(int day=1;day<=n;day++){
        sum=sum+current;
        current++;
      if(day%7 == 0){
        monday++;
        current=monday;
      }
      }
      return sum;
    }
};