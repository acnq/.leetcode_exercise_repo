/*
 * @lc app=leetcode.cn id=231 lang=cpp
 * @lcpr version=30122
 *
 * [231] 2 的幂
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
private:
    static constexpr int BIG = 1 << 30;
public:
    bool isPowerOfTwo(int n) {
        if (BIG % n == 0 && n > 0)
        {
            return true;
        } else
        {
            return false;
        }
        
        
        // if(n < 0) {
        //     return false;
        // } else if ((n & (n - 1)) == 0)
        // {
        //     return true; 
        // } else {
        //     return false;
    }
};
// @lc code=end



/*
// @lcpr case=start
// 1\n
// @lcpr case=end

// @lcpr case=start
// 16\n
// @lcpr case=end

// @lcpr case=start
// 3\n
// @lcpr case=end

 */

