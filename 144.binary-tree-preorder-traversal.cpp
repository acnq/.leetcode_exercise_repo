/*
 * @lc app=leetcode.cn id=144 lang=cpp
 * @lcpr version=30121
 *
 * [144] 二叉树的前序遍历
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
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode * right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    // void preorder(TreeNode* root, vector<int> &ret) {
    //     if (root == nullptr)
    //     {
    //         return;
    //     } 

    //     ret.push_back(root->val);
    //     preorder(root->left, ret);
    //     preorder(root->right, ret);
    //     return;
    // }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ret;
        if (root == nullptr)
        {
            return ret;
        }
        
        TreeNode*  node = root;
        stack<TreeNode*> stk;
        while (node != nullptr || !stk.empty())
        {
            while (node != nullptr)
            {
                ret.emplace_back(node->val);
                stk.emplace(node);
                node = node->left;
            }
            node = stk.top();
            stk.pop();
            node = node->right;
        }
        
        return ret;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,null,2,3]\n
// @lcpr case=end

// @lcpr case=start
// []\n
// @lcpr case=end

// @lcpr case=start
// [1]\n
// @lcpr case=end

// @lcpr case=start
// [1,2]\n
// @lcpr case=end

// @lcpr case=start
// [1,null,2]\n
// @lcpr case=end

 */

