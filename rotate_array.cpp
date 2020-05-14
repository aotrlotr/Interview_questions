/*Given an array, rotate the array to the right by k steps, where k is non-negative.

Follow up:

Try to come up as many solutions as you can, there are at least 3 different ways to solve this problem.
Could you do it in-place with O(1) extra space?
 
  Leetcode*/

  class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        for(int i=0;i<k;i++){
            int rem = nums[nums.size()-1];
            nums.pop_back();
           auto it = nums.insert(nums.begin() , rem );
        }
    }
};

