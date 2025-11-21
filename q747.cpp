/*You are given an integer array nums where the largest integer is unique.

Determine whether the largest element in the array is at least twice as much as every other number in the array. If it is,
 return the index of the largest element, or return -1 otherwise. */

#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        int m=nums[0];
        int maxind=0;
        for(int i=1;i<nums.size();i++){
            if(m < nums[i]){
                m = nums[i];
                maxind = i;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=m && m < 2*nums[i]){
                return -1;
            }
        }
        return maxind;
    }
};