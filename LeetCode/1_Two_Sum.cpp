#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int arr[2] ={};
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[i]+nums[j]==target && i!=j){
                    arr[0]=i;
                    arr[1]=j;
                }
            }
        }
        return std::vector<int>(arr, arr + sizeof(arr) / sizeof(arr[0]));
    }
};