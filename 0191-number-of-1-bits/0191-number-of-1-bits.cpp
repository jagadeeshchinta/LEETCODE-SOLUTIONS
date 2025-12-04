class Solution {
public:
    int hammingWeight(int n) {
        string binary = "";
    while (n > 0) {
        int rem = n % 2;  
        binary = to_string(rem) + binary;  
        n /= 2;    
    }
    int sum=0;
   for(int i=0;i<binary.size();i++){
    if(binary[i]=='1'){
        sum++;
    }
   }
    return sum;
    }
};