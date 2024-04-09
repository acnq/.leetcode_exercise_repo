/*
 * @lc app=leetcode.cn id=169 lang=cpp
 * @lcpr version=30121
 *
 * [169] 多数元素
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
    int countAppearance(vector<int>& nums, int tgt, int lo, int hi){
        int cnt = 0;
        for (int i = lo; i < hi; i++)
        {
            if (tgt == nums[i])
            {
                cnt++;
            }
        }
        return cnt;
    }
    int majority_sub(vector<int>& nums, int lo, int hi){
        if (lo == hi)
        {
            return nums[lo];
        }
        int mid = (lo + hi) / 2;
        int left_majority = majority_sub(nums, lo, mid);
        int right_majority = majority_sub(nums, mid + 1, hi);
        if (countAppearance(nums, right_majority, lo, hi) > (lo - hi + 1) / 2)
        {
            return right_majority;
        }
        if (countAppearance(nums, left_majority, lo, hi) > (lo - hi + 1) / 2)
        {
            return left_majority;
        }
    }
    int majorityElement(vector<int>& nums) {
        // sol5
        int candidate = -1;
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (candidate == nums[i])
            {
                cnt++;
            } else if (cnt <= 0)
            {
                candidate = nums[i];
                cnt = 1;
            } else
            {
                cnt--;
            }
        }
        return candidate;

        // // sol4
        // majority_sub(nums, 0, nums.size());
        // // sol3
        // while (true)
        // {
        //     int candidate = nums[rand() % nums.size()];
        //     int cnt = 0;
        //     for (int i = 0; i < nums.size(); i++)
        //     {
        //         if (candidate == nums[i])
        //         {
        //             cnt ++;
        //         }
        //     }
        //     if (cnt > nums.size() / 2)
        //     {
        //         return candidate;
        //     }
        // }
        return -1;
        // sol 1
        // sort(nums.begin(), nums.end());
        // return nums[nums.size() / 2];
        // sol 2
        // unordered_map<int, int> count;
        // int majority = 0, apperance = 0;
        // for (int i = 0; i < nums.size(); i++)
        // {
        //     count[nums[i]] += 1;
        //     if (count[nums[i]] > apperance)
        //     {
        //         apperance = count[nums[i]];
        //         majority = nums[i];
        //     }
            
        // }
        // return majority;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [3,2,3]\n
// @lcpr case=end

// @lcpr case=start
// [2,2,1,1,1,2,2]\n
// @lcpr case=end

 */

