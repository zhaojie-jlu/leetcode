//https://leetcode-cn.com/problems/reverse-linked-list/submissions/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    typedef struct ListNode *List;
    if(!head) return NULL;
    List pNext = head->next;
    List pCurr = head;
    List pPrev = head;
    pCurr->next = NULL;
    while(pNext != NULL){
        pCurr = pNext;
        pNext = pNext->next;
        pCurr->next = pPrev;
        pPrev = pCurr;  
    }
    return pCurr;
}