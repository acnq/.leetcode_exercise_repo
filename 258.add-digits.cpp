// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem258.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=258 lang=cpp
 * @lcpr version=30204
 *
 * [258] 各位相加
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
    int addDigits(int num) {
        // int sum = 0;
        // while (num >= 10 )
        // {
        //     while (num > 0)
        //     {
        //         sum += num % 10;
        //         num = num / 10;
        //     }
        //     num = sum;
        // }
        if (num % 9 == 0)
        {
            if(num == 0) return 0;
            else return 9;
        } else {
            return num % 9;
        } 
        // return sum;
    }
};
// @lc code=end



/*
// @lcpr case=start
// 38\n
// @lcpr case=end

// @lcpr case=start
// 0\n
// @lcpr case=end

 */

