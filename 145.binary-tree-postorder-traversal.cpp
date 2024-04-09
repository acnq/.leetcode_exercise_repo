/*
 * @lc app=leetcode.cn id=145 lang=cpp
 * @lcpr version=30121
 *
 * [145] 二叉树的后序遍历
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
    void postorder(TreeNode* root, vector<int> &ret) {
        if (root == nullptr)
        {
            return;
        }
        postorder(root->left, ret);
        postorder(root->right, ret);
        ret.push_back(root->val);
        return; 
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ret;
        if (root == nullptr)
        {
            return ret; 
        }
        
        stack<TreeNode*> stk;
        TreeNode* prev;
        while (root != nullptr || !stk.empty())
        {
            while (root != nullptr)
            {
                stk.emplace(root);
                root = root->left;
            }
            
            root = stk.top();
            stk.pop();
            if (root->right == nullptr || root->right == prev )
            {
                ret.emplace_back(root->val);
                prev = root;
                root = nullptr;
            } else
            {
                stk.emplace(root);
                root = root->right;
            }
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

 */

