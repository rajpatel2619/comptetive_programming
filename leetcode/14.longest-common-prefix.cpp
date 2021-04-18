/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int a = 0;
        string pref = strs[0];
        
        for (int i = 1; i <= strs.size() - 1; i++){

            pref = commonPrefixUtil(pref, strs[i]);
        }

        return pref;
       
    }
};
// @lc code=end

