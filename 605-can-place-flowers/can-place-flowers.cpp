class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int i=0;
        int zeros=0;
        while (i<flowerbed.size()){
            if(flowerbed[i]){
                i+=2;
            } else{
                //for those places where there is 0 in the array.
                bool left=(!i||!flowerbed[i-1]);
                bool right=(i==flowerbed.size()-1||!flowerbed[i+1]);
                if(right&&left){
                    i+=2;
                    zeros++;
                } else{
                    i++;
                }
            }
            if(zeros>=n){
                return 1;
            }
        }
        return 0;
    }
};