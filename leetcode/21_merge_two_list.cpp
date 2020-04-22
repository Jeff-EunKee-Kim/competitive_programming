using namespace std;
#include <vector>;

class Solution {

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0); 
        ListNode* dummy = head; 
        
        while (l1 != NULL && l2 != NULL) {
            if (l1->val >= l2->val) {
                head->next = l2; 
                l2 = l2->next; 
            } else {
                head->next = l1; 
                l1 = l1->next; 
            }
            head = head->next; 
        }
        
        if(l1 != NULL) {
           head->next = l1; 
        } else {
            head->next = l2; 
        }
        
        return dummy ->next; 
    }
};