/*
 * @lc app=leetcode.cn id=222 lang=cpp
 * @lcpr version=30122
 *
 * [222] 完全二叉树的节点个数
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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool exist(TreeNode* root, int level, int tgt){
        int bit = 1 << (level - 1);
        cout << bit << endl;
        TreeNode* p = root;
        while (bit != 0 && p != nullptr)
        {
            cout << "indicator: " << (tgt & bit) << endl;
            if ((tgt & bit) == 0)
            {
                p = p->left;
            } else 
            {
                p = p->right;
            }
            bit = bit >> 1;
        }
        if (p == nullptr)
        {
            return false;
        } else {
            return true;
        }
    }
    int countNodes(TreeNode* root) {
        if (root == nullptr)
        {
            return 0;
        }
        int level = 0;
        TreeNode* p = root;
        while (p->left != nullptr)
        {
            p = p->left;
            level++;
        }
        cout << level << endl;
        int low = 1 << level;
        int high = (1 << (level + 1)) - 1;
        while (low < high)
        {
            
            int mid = (low + high + 1) / 2;
            cout << mid << endl;
            if (exist(root, level, mid))
            {
                low = mid;
            }else {
                high = mid - 1;
            }
            
        }
        return low;
        
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,2,3,4,5,6]\n
// @lcpr case=end

// @lcpr case=start
// []\n
// @lcpr case=end

// @lcpr case=start
// [1]\n
// @lcpr case=end

 */

