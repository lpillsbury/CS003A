class Solution {
public:
    int hammingDistance(int x, int y) {
        int d = 0; 
        for(int xy = x^y; xy > 0; xy = xy >> 1){
            if((xy & 1)>0){
                d++;
            }
        }
        return d;
    }
};