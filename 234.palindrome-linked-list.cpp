/*
 * @lc app=leetcode.cn id=234 lang=cpp
 * @lcpr version=30122
 *
 * [234] 回文链表
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
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {} 
};

class Solution {
public:
    ListNode* frontEnd;
    bool recursivelyCheck(ListNode* head){
        if (head != nullptr)
        {
            if (!(recursivelyCheck(head->next)))
            {
                return false;   
            }
            if (head->val != frontEnd->val)
            {
                return false;
            }
            frontEnd = frontEnd->next;
        }
        return true;
    }
    bool isPalindrome(ListNode* head) {
        frontEnd = head;
        return recursivelyCheck(head);
        // vector<int> nums;
        // ListNode* p = head;
        // while (p != nullptr)
        // {
        //     nums.push_back(p->val);
        //     p = p->next;
        // }
        // for (int i = 0, j = nums.size() - 1; i < j; i++, j--) 
        // {
        //     if (nums[i] != nums[j])
        //     {
        //         return false;
        //     }
        // }
        // return true;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,2,2,1]\n
// @lcpr case=end

// @lcpr case=start
// [1,2]\n
// @lcpr case=end

 */

