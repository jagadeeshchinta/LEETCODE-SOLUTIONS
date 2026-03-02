class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        // int x=flowerbed.size();
        // int c=0;
        // int j=0;
        // for(int i=0;i<x;i++){
        //     if(flowerbed[i]==1){
        //         c++;
        //     }else{
        //         j++;
        //     }
        // }
        // return (c+n)<=j;
        int count = 1;  // start with 1 to handle left boundary
        int canPlant = 0;
        
        for(int flower : flowerbed) {
            if(flower == 0) {
                count++;
            } else {
                canPlant += (count - 1) / 2;
                count = 0;
            }
        }
        
        count++;  // handle right boundary
        canPlant += (count - 1) / 2;
        
        return canPlant >= n;
    }
};