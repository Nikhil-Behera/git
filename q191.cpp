/*Given a positive integer n, write a function that returns the number of set bits in its binary representation (also known as the Hamming weight).*/
class Solution {
    public:
        int hammingWeight(int n) {
            int count = 0;
            int ans=0;
            while(n>0){
                ans = n%2;
                n = n/2;
                if(ans == 1){
                    count = count+1;
                }
            }
            return count;
        }
    };