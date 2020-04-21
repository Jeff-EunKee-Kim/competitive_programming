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
//      1
//    2   3
// 4   5

int main() {
    TreeNode* root = new TreeNode(1); 
    root->left = new TreeNode(2); 
    root->right = new TreeNode(3); 
    root->left->left = new TreeNode(4); 
    root->left->right = new TreeNode(5); 

    queue<TreeNode*> q ;
    q.push(root); 

    while (q.size() != 0) {
        int level = q.size(); 

        for (int i = 0; i< level; i++) {
            TreeNode* curr = q.front(); 
            q.pop(); 
            cout << curr->val << endl;

            if(curr->left != NULL) {
                q.push(curr->left); 
            }
            if (curr->right != NULL) {
                q.push(curr->right); 
            }
        }
    }


    // cout << "Hello to my repo" << endl; 
}