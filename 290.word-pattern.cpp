/*
 * @lc app=leetcode.cn id=290 lang=cpp
 * @lcpr version=30204
 *
 * [290] 单词规律
 */


// @lcpr-template-start
using namespace std;
#include <algorithm>
#include <array>
#include <bitset>
#include <climits>
#include <deque>
#include <functional>
#include <iostream>
#include <list>
#include <queue>
#include <stack>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
// @lcpr-template-end
// @lc code=start
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<string, char> str2ch;
        unordered_map<char, string> ch2str;

        int stringlen = s.size();
        int stringIndex = 0;
        for (int i = 0; i < pattern.size(); i++)
        {
            char ch = pattern[i];
            if (stringIndex > stringlen)
            {
                cout << stringIndex;
                return false;   
            }

            int stringJndex = stringIndex;
            while (stringJndex < stringlen && s[stringJndex] != ' ')
            {
                stringJndex++;
            }
            string str = s.substr(stringIndex, stringJndex - stringIndex);
            if (str2ch.count(str) && str2ch[str] != ch)
            {
                return false;
            }
            if (ch2str.count(ch) && ch2str[ch] != str)
            {
                return false;
            }
            ch2str[ch] = str;
            str2ch[str] = ch;
            stringIndex = stringJndex + 1;
            cout << "test" << endl;
        }

        if(stringIndex < stringlen) {
            return false;
        } else {
            return true;
        }
    }
};
// @lc code=end



/*
// @lcpr case=start
// "abba"\n"dog cat cat dog"\n
// @lcpr case=end

// @lcpr case=start
// "abba"\n"dog cat cat fish"\n
// @lcpr case=end

// @lcpr case=start
// "aaaa"\n"dog cat cat dog"\n
// @lcpr case=end

 */

