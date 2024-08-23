/*
 * @lc app=leetcode.cn id=242 lang=cpp
 * @lcpr version=30204
 *
 * [242] 有效的字母异位词
 */

#include <string>
#include <vector>
using namespace std; 
// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
        {
            return false;
        }
        vector<int> record(26, 0);
        for (int i = 0; i < s.length(); i++)
        {
            record[s[i] - 'a'] ++;
        }

        for (int i = 0; i < t.length(); i++)
        {
            record[t[i] - 'a'] --;
            if (record[t[i] - 'a'] < 0)
            {
                return false;
            }
            
        }
        
        return true;
    }
};
// @lc code=end



/*
// @lcpr case=start
// "anagram"\n"nagaram"\n
// @lcpr case=end

// @lcpr case=start
// "rat"\n"car"\n
// @lcpr case=end

 */

