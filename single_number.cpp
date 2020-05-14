//Leetcode Arrays
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int set_sum=0;
        unordered_set<int> :: iterator itr; 
    for (itr = s.begin(); itr != s.end(); itr++){
        set_sum=set_sum + *itr;
    }
        
        set_sum=2*set_sum;
        int num_sum=0;
        for(int i=0;i<nums.size();i++){
            num_sum+=nums[i];
        }
        
        return (set_sum - num_sum);
    }
};