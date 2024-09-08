/*
 * @lc app=leetcode.cn id=326 lang=cpp
 * @lcpr version=30204
 *
 * [326] 3 的幂
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
    bool isPowerOfThree(int n) {
        // while (n && n % 3 == 0)
        // {
        //     n = n / 3;
        // }
        // if (n == 1)
        // {
        //     return true;
        // } else {
        //     return false;
        // }
        int max_3p = pow(3, 19);
        if (n > 0 && max_3p % n == 0)
        {
            return true;
        } else
        {
            return false;
        }
    }
};
// @lc code=end



/*
// @lcpr case=start
// 27\n
// @lcpr case=end

// @lcpr case=start
// 0\n
// @lcpr case=end

// @lcpr case=start
// 9\n
// @lcpr case=end

// @lcpr case=start
// 45\n
// @lcpr case=end

 */

