/*
 * @lc app=leetcode.cn id=278 lang=cpp
 * @lcpr version=30204
 *
 * [278] 第一个错误的版本
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
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left, right = 1, n;
        while (left < right)
        {
            int mid = (left + right) / 2;
            if (isBadVersion(mid) == 0)
            {
                left = mid + 1;
            } else
            {
                right = mid;
            }
        }
        return right;
    }
};
// @lc code=end



/*
// @lcpr case=start
// 5\n4\n
// @lcpr case=end

// @lcpr case=start
// 1\n1\n
// @lcpr case=end

 */
