/*
 * @lc app=leetcode.cn id=171 lang=cpp
 * @lcpr version=30121
 *
 * [171] Excel 表列序号
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
    int titleToNumber(string columnTitle) {
        int number = 0;
        int multiple = 1;
        for (int i = 0; i < columnTitle.size(); i++)
        {
            int digit = columnTitle[i] - 'A' + 1;
            number += multiple * digit;
            multiple *= 26;
        }
        return number;
    }
};
// @lc code=end



/*
// @lcpr case=start
// "A"\n
// @lcpr case=end

// @lcpr case=start
// "AB"\n
// @lcpr case=end

// @lcpr case=start
// "ZY"\n
// @lcpr case=end

 */

