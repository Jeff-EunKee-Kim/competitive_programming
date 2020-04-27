#include <cstddef>
#include <iostream>

using namespace std;

class ListNode {
   public:
    int val;
    ListNode* next;
    ListNode() {}
    ListNode(int val) {
        this->val = val;
    }
    ListNode(int val, ListNode* next) {
        this->val = val;
        this->next = next;
    }
};

void print_list(ListNode* n) {
    while (n != NULL) {
        cout << n->val << " ";
        n = n->next;
    }
    cout << endl;
}

int main() {
    ListNode* head = new ListNode();
    ListNode* second = new ListNode(2);
    ListNode* third = new ListNode(3, new ListNode(4));

    head->val = 1;
    head->next = second;
    second->next = third;

    print_list(head);
    ListNode* dummy = head;

    while (head->next->next != NULL) {
        head = head->next;
    }
    head->next = NULL;
    // ListNode* pDelete = head->next;
    // delete pDelete;
    free(head->next);

    print_list(dummy);
}