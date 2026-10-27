
// Definition for singly-linked list.
#include <asm-generic/errno.h>
struct ListNode 
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {

public:

    // 1 
    ListNode* reverseList(ListNode* head) 
    {
        if(head==nullptr) {return head;}

        ListNode* prev = nullptr;
        ListNode* nextNode = head->next;

        while(head!=nullptr)
        {
            nextNode = head->next;
            head->next = prev;
            prev = head;
            head = nextNode;
            
        }
        return prev;
    }
};