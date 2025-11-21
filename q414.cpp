#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:
     int thirdMax(vector<int>& nums) {
         sort(nums.begin(),nums.end());
    //     int max;
    //     for(int i=0;i<nums.size();i++){
    //         if(nums[0]<nums[i]){
    //             max=nums[i];
    //         }
    //     }
    //     int on;
    //     for(int i=0;i<nums.size();i++){
    //         for(int j=i+1;j<nums.size();j++){
    //             if(nums[i]==nums[j]){
    //                 on=nums[i];
    //                 return on;
    //             }
    //         }
    //     }
        
    //     for(int i=0;i<nums.size();i++){
    //         if(max-2==nums[i]){
    //             return nums[i];
    //         }
    //     }
    //     return max;
        int del=1;
        int max=nums[nums.size()-1];
        for(int i=nums.size()-2; i >= 0; i--){
            if(nums[i]!=nums[i+1]){
                del++;
            }
            if(del==3){
                return nums[i];
            }
        }
        return max;
    }
};