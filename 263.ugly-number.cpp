/*
 * @lc app=leetcode.cn id=263 lang=cpp
 * @lcpr version=30204
 *
 * [263] 丑数
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
    bool isUgly(int n) {
        if (n <= 0)
        {
            return false;
        }
        vector<int> factors = {2, 3, 5};
        for (int i = 0; i < factors.size(); i++)
        {
            while (n % factors[i] == 0)
            {
                n = n / factors[i];
            }
            
        }
        
        return n == 1;
    }
};
// @lc code=end



/*
// @lcpr case=start
// 6\n
// @lcpr case=end

// @lcpr case=start
// 1\n
// @lcpr case=end

// @lcpr case=start
// 14\n
// @lcpr case=end

 */

