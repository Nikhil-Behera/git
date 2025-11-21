// Given an integer array arr, return true if there are three consecutive odd numbers in the array. Otherwise, return false.
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count =0;
        for(int i=0;i+2<arr.size();i++){
            if(arr[i]%2!=0 && arr[i+1]%2!=0 && arr[i+2]%2!=0){
                count++;
            }
            if(count == 1){
                return true;
            }
        }
        return false;
    }
};