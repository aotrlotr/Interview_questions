/*
Given a non-empty array of digits representing a non-negative integer, plus one to the integer.

The digits are stored such that the most significant digit is at the head of the list, and each element in the array contain a single digit.

You may assume the integer does not contain any leading zero, except the number 0 itself.
Leetcode*/
class Solution {
public:
         vector<int> plusOne(vector<int>& digits) {
            int size = digits.size();
            if (!size) return digits;
            for(int i = size-1;i>=0;--i){
                if (digits[i]+1 >9){
                    digits[i] = digits[i] + 1 - 10;
                    if(i==0) digits.insert(digits.begin(),1);
                }
                else{
                    digits[i] = digits[i] + 1;
                    break;
                }
            }
            return digits;
        }
    };