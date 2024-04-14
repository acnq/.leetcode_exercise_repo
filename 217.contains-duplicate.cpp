/*
 * @lc app=leetcode.cn id=217 lang=cpp
 * @lcpr version=30122
 *
 * [217] 存在重复元素
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
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for (int i = 0; i < nums.size(); i++)
        {
            if (s.count(nums[i]))
            {
                return true;
            }
            s.insert(nums[i]);
        }
        return false;
        // sort(nums.begin(), nums.end());
        // for (int i = 0; i < nums.size() - 1; i++)
        // {
        //     if (nums[i] == nums[i + 1])
        //     {
        //         return true;
        //     }
        // }
        // return false;
        
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,2,3,1]\n
// @lcpr case=end

// @lcpr case=start
// [1,2,3,4]\n
// @lcpr case=end

// @lcpr case=start
// [1,1,1,3,3,4,3,2,4,2]\n
// @lcpr case=end

 */

