/*
Problem statement:
Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),
        nums.end());
        int n= nums.size();
        if (nums[0] !=0) return 0;
        if(nums[n-1] !=n) return n;
        for (int i=1;i<n;++i) {
             if(nums[i] !=nums[i-1] + 1){
                 return nums[i-1]+ 1;
             } 
        }
        return -1;
    }
};

 
