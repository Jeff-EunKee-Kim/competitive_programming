using namespace std; 

#include <vector>

class Solution {

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL; 
        ListNode* curr = head; 
        ListNode* next = NULL; 
        
        while(curr != NULL) {
            next = curr->next; 
            curr->next = prev; 
            prev = curr; 
            curr = next; 
        }
        
        return prev; 
    }
};