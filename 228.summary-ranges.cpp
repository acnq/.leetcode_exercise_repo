/*
 * @lc app=leetcode.cn id=228 lang=cpp
 * @lcpr version=30122
 *
 * [228] 汇总区间
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
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ret;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            int low = i;
            while (i < n - 1 && nums[i + 1] == nums[i] + 1 )
            {
                i++;
            }
            int high = i;
            string tmp = to_string(nums[low]);
            if (high > low)
            {
                tmp.append("->");
                tmp.append(to_string(nums[high]));
            }
            ret.push_back(tmp);
        }
        return ret;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [0,1,2,4,5,7]\n
// @lcpr case=end

// @lcpr case=start
// [0,2,3,4,6,8,9]\n
// @lcpr case=end

 */

