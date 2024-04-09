/*
 * @lc app=leetcode.cn id=119 lang=cpp
 * @lcpr version=30120
 *
 * [119] 杨辉三角 II
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
    vector<int> getRow(int rowIndex) {
        vector<int> cur(rowIndex + 1);

        cur[0] = 1;
        for (int i = 0; i <= rowIndex; i++)
        {
            cur[i] = cur[i - 1] * 1LL * (rowIndex - i + 1) / i;
        }
        
        return cur;
    }
};
// @lc code=end



/*
// @lcpr case=start
// 3\n
// @lcpr case=end

// @lcpr case=start
// 0\n
// @lcpr case=end

// @lcpr case=start
// 1\n
// @lcpr case=end

 */

