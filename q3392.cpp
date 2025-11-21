#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
        int countSubarrays(vector<int>& nums) {
            int count =0;
            for(int i=0;i+2<nums.size();i++){
                if((nums[i] + nums[i+2]) == (nums[i+1]/2.0)){
                    count++;
                }
            }
            return count;
        }
    };