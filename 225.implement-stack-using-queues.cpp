/*
 * @lc app=leetcode.cn id=225 lang=cpp
 * @lcpr version=30122
 *
 * [225] 用队列实现栈
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
class MyStack {
public:
    // queue<int> q1;
    // queue<int> q2;

    // /** Initialize your data structure here. */
    // MyStack() {

    // }
    
    // /** Push element x onto stack. */
    // void push(int x) {
    //     q1.push(x);
    //     while (!q2.empty())
    //     {
    //         int y = q2.front();
    //         q1.push(y);
    //         q2.pop();
    //     }
    //     swap(q1, q2);
    // }
    
    // /** Removes the element on top of the stack 
    //  * and returns that element. */
    // int pop() {
    //     int r =  q1.front();
    //     q1.pop();
    //     return r;
    // }
    
    // /** Get the top element. */
    // int top() {
    //     int r = q1.front();
    //     return r;
    // }
    
    // /** Returns whether the stack is empty. */
    // bool empty() {
    //     return q1.empty();
    // }
    queue<int> q;

    /** Initialize your data structure here.*/
    MyStack() {

    }

    /** Push element x onto stack. */
    void push(int x){
        int n = q.size();
        q.push(x);
        for (int i = 0; i < n; i++)
        {
            q.push(q.front());
            q.pop();
        }
        return ;
    }

    /** Removes the element on top of the stack 
     * and returns that element. */
    int pop(){
        int r = q.front();
        q.pop();
        return r;
    }

    /** Get the top element. */
    int top(){
        return q.front();
    }

    /** Returns whether the stack is empty. */
    bool empty(){
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
// @lc code=end



/*
// @lcpr case=start
// ["MyStack", "push", "push", "top", "pop", "empty"][[], [1], [2], [], [], []]\n
// @lcpr case=end

 */

