#include <cstddef>
#include <iostream>

using namespace std;

class TreeNode {
    public:
        int val; 
        TreeNode* left; 
        TreeNode* right; 
    TreeNode(){}
    TreeNode(int val) {
        this->val = val; 
    }
    TreeNode(int val, TreeNode* left, TreeNode* right) {
        this->val = val; 
        this->left = left; 
        this->right = right; 
    }
};

int main() {
    TreeNode* root = new TreeNode(); 
    TreeNode* left = new TreeNode(3); 
    TreeNode* right = new TreeNode(5); 
    root->left = left; 
    root->right = right; 

    cout << "Root: " << root->val << endl; 
    cout << "Root left: " << root->left->val << endl; 
    cout << "Root right: " << root->right->val << endl; 

    
}