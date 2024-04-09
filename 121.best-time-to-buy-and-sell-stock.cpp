/*
 * @lc app=leetcode.cn id=121 lang=cpp
 * @lcpr version=30120
 *
 * [121] 买卖股票的最佳时机
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
    int maxProfit(vector<int>& prices) {
        int inf = 1e6;
        int minPrice = inf;
        int maxProfit = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            maxProfit = max(maxProfit, prices[i] - minPrice);
            minPrice = min(prices[i], minPrice);
        }
        return maxProfit;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [7,1,5,3,6,4]\n
// @lcpr case=end

// @lcpr case=start
// [7,6,4,3,1]\n
// @lcpr case=end

 */

