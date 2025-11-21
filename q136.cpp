/*without XOR*/
#include<iostream>
#include<vector>
using namespace std;
int singleNumber(vector<int>& nums) {

    if(nums.size() == 1) return nums[0];

    int dist=0;

    for(int i=0;i<nums.size();i++){
        int fst= nums[i];
        for(int j=1;j<nums.size();j++){
            if(fst == nums[j]){
                break;
            }
            else{
                dist = fst;
            }
        }
    } 
    return dist;
}