/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
       if(x<0) return false;
       double reverse_num = 0;
       int prev_num = x;
       while (x>0)
       {
        reverse_num = reverse_num*10+x%10;
        x=x/10;
       }
       return (reverse_num==prev_num) ? true:false;
       
    }
};
// @lc code=end

