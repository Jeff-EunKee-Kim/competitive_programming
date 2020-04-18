#include <cstddef>
#include <iostream>

using namespace std;

class Node {
    public:
        int val;
        Node* next;
        Node() {}
        Node(int val) {
            this->val = val; 
        }
        Node(int val, Node* next) {
            this->val = val; 
            this->next = next;
        }
};

void print_list(Node * n) {
    while (n != NULL) {
        cout << n->val << " ";
        n = n->next;
    }
}

int main() {
    Node* head = new Node();
    Node* second = new Node(2); 
    Node* third = new Node(3, new Node(4));

    head->val = 1;
    head->next = second;

    second->next = third;

    print_list(head);
}