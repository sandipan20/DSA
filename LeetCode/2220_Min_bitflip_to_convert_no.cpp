#include<iostream>
using namespace std;
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int flip= start ^ goal;
        // return __builtin_popcount(flip);
        int c=0;
        for(int i=0;i<32;i++){
            if(flip & (1<<i)){
                c++;
            }
        }
        return c;
    }
};
/*class Solution {
public:
    int minBitFlips(int start, int goal) {
        int flip= start ^ goal;
        // return __builtin_popcount(flip);
        int c=0;
        for(int i=0;i<32;i++){
            if(flip & (1<<i)){
                c++;
            }
        }
        return c;
    }
};*/