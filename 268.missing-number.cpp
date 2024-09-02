// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem268.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=268 lang=cpp
 * @lcpr version=30204
 *
 * [268] 丢失的数字
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
    int missingNumber(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // for (int i = 0; i < nums.size(); i++)
        // {
        //     if (nums[i] != i)
        //     {
        //         return i;
        //     }
        // }
        // return nums.size();
        // unordered_set<int> seen;
        // int n = nums.size();
        // for (int i = 0; i < n; i++)
        // {
        //     seen.insert(nums[i]);
        // }
        // for (int i = 0; i < n; i++)
        // {
        //     if (seen.count(i) != 1)
        //     {
        //         return i;
        //     }
        // }
        // return n;
        // int res = 0;
        // int n = nums.size();
        // for (int i = 0; i < n; i++)
        // {
        //     res = res ^ nums[i];
        // }
        // for (int i = 0; i < n; i++)
        // {
        //     res ^= i;
        // }
        // return res;

        int n = nums.size();
        int total = n * (n + 1) / 2;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
        }
        return total - sum;
        
    }
};
// @lc code=end



/*
// @lcpr case=start
// [3,0,1]\n
// @lcpr case=end

// @lcpr case=start
// [0,1]\n
// @lcpr case=end

// @lcpr case=start
// [9,6,4,2,3,5,7,0,1]\n
// @lcpr case=end

// @lcpr case=start
// [0]\n
// @lcpr case=end

 */

