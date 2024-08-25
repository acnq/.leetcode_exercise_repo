/*
 * @lc app=leetcode.cn id=257 lang=cpp
 * @lcpr version=30204
 *
 * [257] 二叉树的所有路径
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
    TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    // void construct_paths(TreeNode* root, string path, vector<string>& paths) {
    //     if (root != nullptr)
    //     {
    //         path += to_string(root->val);
    //         if (root->left == nullptr && root->right == nullptr)
    //         {
    //             paths.push_back(path);
    //         } else
    //         {
    //             path += "->";
    //             construct_paths(root->left, path, paths);
    //             construct_paths(root->right, path, paths);
    //         }
    //         return;
    //     }
    //     return;
    // }
    // vector<string> binaryTreePaths(TreeNode* root) {
    //     vector<string> paths;
    //     construct_paths(root, "", paths);
    //     return paths;
    // }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> paths;
        if (root == nullptr)
        {
            return paths;
        }
        
        queue<TreeNode*> node_q; 
        queue<string> path_q;

        node_q.push(root);
        path_q.push(to_string(root->val));
        while (!node_q.empty())
        {
            TreeNode* node = node_q.front();
            string path = path_q.front();

            node_q.pop();
            path_q.pop();

            if (node->left == nullptr && node->right == nullptr)
            {
                paths.push_back(path);
            } else {
                if (node->left != nullptr)
                {
                    node_q.push(node->left);
                    path_q.push(path + "->" + to_string(node->left->val));
                }
                if (node->right != nullptr)
                {
                    node_q.push(node->right);
                    path_q.push(path + "->" + to_string(node->right->val));
                }
            }
        }
        return paths;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,2,3,null,5]\n
// @lcpr case=end

// @lcpr case=start
// [1]\n
// @lcpr case=end

 */

