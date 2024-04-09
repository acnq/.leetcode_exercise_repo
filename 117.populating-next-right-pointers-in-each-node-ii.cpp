/*
 * @lc app=leetcode.cn id=117 lang=cpp
 * @lcpr version=30120
 *
 * [117] 填充每个节点的下一个右侧节点指针 II
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
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}
    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}
    Node(int _val, Node* _left, Node* _right, Node* _next) 
        : val(_val), left(_left), right(_right), next(_next) {} 
};

class Solution {
public:
    void handle(Node* &p, Node* &last, Node* &nextStart) {
        if (last != nullptr)
        {
            last->next = p;
        }
        if (nextStart == nullptr)
        {
            nextStart = p;
        }
        last = p;
    }
    Node* connect(Node* root) {
        if (root == nullptr)
        {
            return nullptr; 
        }
        Node* start = root;
        while (start != nullptr)
        {
            Node* last = nullptr;
            Node* nextStart = nullptr;
            for (Node* p = start; p != nullptr; p = p->next)
            {
                if (p->left)
                {
                    handle(p->left, last, nextStart);
                }
                if (p->right)
                {
                    handle(p->right, last, nextStart);
                }
            }
            start = nextStart;
        }
        return root;
        
        // if (root == nullptr)
        // {
        //     return nullptr;
        // }
        // queue<Node*> que;
        // que.push(root);
        // while (!(que.empty()))
        // {
        //     int n = que.size();
        //     Node* last = nullptr;
        //     for (int i = 1; i < n; i++)
        //     {
        //         Node* item = que.front();
        //         que.pop();
        //         if (item->left)
        //         {
        //             que.push(item->left);
        //         }
        //         if (item->right)
        //         {
        //             que.push(item->right);
        //         }
        //         if (i != 1)
        //         {
        //             last->next = item;  
        //         }
        //         last = item;
        //     }
        // }
        // return root;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,2,3,4,5,null,7]\n
// @lcpr case=end

// @lcpr case=start
// []\n
// @lcpr case=end

 */

