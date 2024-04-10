/*
 * @lc app=leetcode.cn id=202 lang=cpp
 * @lcpr version=30121
 *
 * [202] 快乐数
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
    int getNext(int n){
        int ttl = 0;
        while (n > 0)
        {
            int digit = n % 10;
            n = n / 10;
            ttl += digit * digit;
        }
        return ttl;
    }
    bool isHappy(int n) {
        unordered_set<int> loop = {4, 16, 37, 58, 89, 145, 42, 20};
        while (n != 1 && !loop.count(n))
        {
            n = getNext(n);
        }
        if (n == 1)
        {
            return true;
        } else {
            return false;
        }
        
        // int slowRunner = n;
        // int fastRunner = getNext(n);
        // while (fastRunner != 1 && slowRunner != fastRunner)
        // {
        //     slowRunner = getNext(slowRunner);
        //     fastRunner = getNext(getNext(fastRunner));
        // }
        // if (fastRunner == 1)
        // {
        //     return true;    
        // } else
        // {
        //     return false;
        // }
        
        
        // unordered_set<int> seen;
        // while (n != 1 && !seen.count(n) )
        // {
        //     seen.insert(n);
        //     n = getNext(n);
        // }
        // if (n == 1)
        // {
        //     return true;
        // } else {
        //     return false;
        // } 
    }
};
// @lc code=end



/*
// @lcpr case=start
// 19\n
// @lcpr case=end

// @lcpr case=start
// 2\n
// @lcpr case=end

 */

