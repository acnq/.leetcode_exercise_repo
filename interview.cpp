#include <vector>
#include <iostream>
using namespace std;

struct ListNode
{
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(NULL) {}
};
void filter(int tgt, ListNode* head){
  ListNode* p = head;
  while (p != nullptr && p->next != nullptr)
  {
    if (p->next->val == tgt)
    {
      p->next = p->next->next;
    }
    p = p->next;
  }
  return;
}

void printList(ListNode* head){
  ListNode* p = head;
  while (p != nullptr)
  {
    cout << p->val << endl;

  }
  
}

int main(){
  // test filter
  ListNode* list = new ListNode(1);
  ListNode* p = new ListNode(2);
  list->next = p;
  filter(2, list);
  printList(list);
  return 0;
}