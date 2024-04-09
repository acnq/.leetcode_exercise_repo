/*
 * @lc app=leetcode.cn id=88 lang=cpp
 * @lcpr version=21909
 *
 * [88] 合并两个有序数组
 */

// @lc code=start
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int N = nums.size();
        int i = 0, j = 0; // doble pointer
        for (i = 0; i < N; ++i)
        {
            if (nums[i] != 0)
            {
                nums[j] = nums[i];
                j++;
            }
            
        }

        for ( i = j; i < N; ++i)
        {
            nums[i] = 0;
        }
        
        return;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,2,3,0,0,0]\n3\n[2,5,6]\n3\n
// @lcpr case=end

// @lcpr case=start
// [1]\n1\n[]\n0\n
// @lcpr case=end

// @lcpr case=start
// [0]\n0\n[1]\n1\n
// @lcpr case=end

 */

