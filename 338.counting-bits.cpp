/*
 * @lc app=leetcode.cn id=338 lang=cpp
 * @lcpr version=30204
 *
 * [338] 比特位计数
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
    // int countOnes(int x) {
    //     int ones = 0;
    //     while (x > 0)
    //     {
    //         x = x & (x - 1);
    //         ones++;
    //     }
    //     return ones;
    // }
    vector<int> countBits(int n) {
        // vector<int> bits(n + 1);
        // for (int i = 0; i < n + 1; i++)
        // {
        //     bits[i] = countOnes(i);
        // }
        // return bits; 

        //vector<int> bits(n + 1);
        // int highBits = 0;
        // for (int i = 1; i < n + 1; i++)
        // {
        //     if ((i & (i - 1)) == 0)
        //     {
        //         highBits = i;
        //     }
        //     bits[i] = bits[i - highBits] + 1;
        // }
        // return bits;

        // vector<int> bits(n + 1);
        // for (int i = 1; i < n + 1; i++)
        // {
        //     bits[i] = bits[i >> 1] + (i & 1);
        // }
        // return bits;

        vector<int> bits(n + 1);
        for (int i = 1; i < n + 1; i++)
        {
            bits[i] = bits[i & (i - 1)] + 1;
        }
        return bits;
        
    }
};
// @lc code=end



/*
// @lcpr case=start
// 2\n
// @lcpr case=end

// @lcpr case=start
// 5\n
// @lcpr case=end

 */

