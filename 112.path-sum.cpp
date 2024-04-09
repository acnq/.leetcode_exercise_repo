/*
 * @lc app=leetcode.cn id=112 lang=cpp
 * @lcpr version=30119
 *
 * [112] 路径总和
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
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr)
        {
            return false;
        } else if (root->right == nullptr && root->left == nullptr)
        {
            if (root->val == targetSum)
            {
                return true;
            } else {
                return false;
            }
        } else
        {
            if (hasPathSum(root->left, targetSum - root->val) || hasPathSum(root->right, targetSum - root->val))
            {
                return true;
            } else {
                return false;
            }
            
        }
        
        
        
        // if (root == nullptr)
        // {
        //     return false;
        // }
        
        // queue<TreeNode *> node_que;
        // queue<int> sum_que;
        // node_que.push(root);
        // sum_que.push(root->val);

        // while (!node_que.empty())
        // {
        //     TreeNode* node = node_que.front();
        //     int sum = sum_que.front();
        //     node_que.pop();
        //     sum_que.pop();

        //     if (node->left == nullptr && node->right == nullptr)
        //     {
        //         if (sum == targetSum)
        //         {
        //             return true;
        //         }
        //         continue;
        //     } else if (node->left == nullptr)
        //     {
        //         node_que.push(node->right);
        //         sum += node->right->val;
        //         sum_que.push(sum);
                
        //     } else if (node->right == nullptr)
        //     {
        //         node_que.push(node->left);
        //         sum += node->left->val;
        //         sum_que.push(sum);
        //     } else {
        //         node_que.push(node->left);
        //         node_que.push(node->right);
        //         int sum1 = sum + node->left->val;
        //         int sum2 = sum + node->right->val;
        //         sum_que.push(sum1);
        //         sum_que.push(sum2);
        //     }
        // }
        // return false;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [5,4,8,11,null,13,4,7,2,null,null,null,1]\n22\n
// @lcpr case=end

// @lcpr case=start
// [1,2,3]\n5\n
// @lcpr case=end

// @lcpr case=start
// []\n0\n
// @lcpr case=end

 */

