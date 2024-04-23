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
    // ListNode* frontEnd;
    // bool recursivelyCheck(ListNode* head){
    //     if (head != nullptr)
    //     {
    //         if (!(recursivelyCheck(head->next)))
    //         {
    //             return false;   
    //         }
    //         if (head->val != frontEnd->val)
    //         {
    //             return false;
    //         }
    //         frontEnd = frontEnd->next;
    //     }
    //     return true;
    // }
    ListNode* partiList(ListNode* head){
        ListNode* fast = head;
        ListNode* slow = head;
        while (fast->next != nullptr && fast->next->next != nullptr)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    ListNode* reverseList(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = nullptr;
        while (curr != nullptr)
        {
            ListNode* tmp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = tmp;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if (head == nullptr)
        {
            return true;
        }
        // 区分前半部分和后半部分链表
        ListNode* plist = partiList(head);
        // 翻转后半部分的链表
        ListNode* newplist = reverseList(plist->next);

        ListNode* p1 = head;
        ListNode* p2 = newplist;
        bool result = true;
        while (result && p2 != nullptr)
        {
            if (p1->val != p2->val)
            {
                return false;
            }
            p1 = p1->next;
            p2 = p2->next;
        }
        result = true;
        // 还原链表
        plist->next = reverseList(newplist);
        return result;
        // frontEnd = head;
        // return recursivelyCheck(head);
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

