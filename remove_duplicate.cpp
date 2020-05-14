// Given a sorted array nums, remove the duplicates in-place such that each element appear only once and return the new length.

// Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

//Leetcode

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set <int> s(nums.begin(),nums.end());
        nums.assign(s.begin(),s.end());
        return nums.size();
        
    }
};