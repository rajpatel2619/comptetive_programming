/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        
        stringstream str(s);
        string temp;
        int length = 0;
        while (str>>temp)
        length = temp.size();       
        return length;
        
    }
};
// @lc code=end

