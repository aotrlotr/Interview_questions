/*Given an array of integers, find if the array contains any duplicates.

Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.

 Leetcode*/

 class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.empty()){
            return false;
        }
        else{
        for(int i=0;i< (nums.size()-1);++i)
        {
            if(nums[i]==nums[i+1])
               return true;
           
        }
        }
        
        return false;
    }
};