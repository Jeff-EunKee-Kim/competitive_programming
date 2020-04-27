#include <iostream>
#include <vector> 
#include <queue>

using namespace std;

class TreeNode{
    public: 
        int val; 
        TreeNode* left; 
        TreeNode* right; 
    
    TreeNode (int val) {
        this->val = val; 
    }

    TreeNode(int val, TreeNode* left, TreeNode* right) {
        this->val = val; 
        this->left = left; 
        this->right = right; 
    }
};

int main() {
    TreeNode* root = new TreeNode(1); 
    root->left = new TreeNode(2); 
    root->right = new TreeNode(3); 
    root->left->left = new TreeNode(4); 
    root->left->right = new TreeNode(5); 


    // cout << "Hello to my repo" << endl; 
}