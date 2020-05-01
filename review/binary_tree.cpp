#include <cstddef>
#include <iostream>
#include <queue>
#include <stack> 

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

void printTreeBFS(TreeNode* root) {

    queue<TreeNode*> q; 
    q.push(root); 

    while(!q.empty()) {
        TreeNode* curr = q.front(); q.pop(); 
        cout << curr->val << endl; 
        if (curr->right != NULL) {
            q.push(curr->right); 
        }
        if (curr->left != NULL) {
            q.push(curr->left); 
        }
    }
}

void printTreeDFS(TreeNode* root) {
    stack<TreeNode*> q; 
    q.push(root); 

    while(!q.empty()) {
        TreeNode* curr = q.top(); q.pop(); 
        cout << curr->val << endl; 
        if (curr->right != NULL) {
            q.push(curr->right); 
        }
        if (curr->left != NULL) {
            q.push(curr->left); 
        }
    }
}

// preOrder traversal
// postOrder traversal
// inOrder traversal

void printPreorder(TreeNode* root) {
    if (root == NULL) return ; 
    cout << root->val << " "; 
    printPreorder(root->left); 
    printPreorder(root->right); 
}

void printInorder(TreeNode* root) {
    if (root == NULL) return ; 
    printInorder(root->left); 
    cout << root->val << " "; 
    printInorder(root->right); 
}

void printPostorder(TreeNode* root) {
    if (root == NULL) return ; 
    printPostorder(root->left); 
    printPostorder(root->right); 
    cout << root->val << " "; 
}


        //         1
        //     2       3
        //  4    5   6    7

TreeNode* makeTree(int a, int b, int c, int d, int e, int f, int g) {
    TreeNode* root = new TreeNode(a); 
    root->left = new TreeNode(b); 
    root->right = new TreeNode(c); 
    root->left->left = new TreeNode(d); 
    root->left->right = new TreeNode(e); 
    root->right->left = new TreeNode(f); 
    root->right->right = new TreeNode(g); 

    return root; 
}

TreeNode* makeBinaryTree() {
    TreeNode* root = new TreeNode(1); 
    root->left = new TreeNode(2); 
    root->right = new TreeNode(3); 
    root->left->left = new TreeNode(4); 
    root->left->right = new TreeNode(5); 
    root->right->left = new TreeNode(6); 
    root->right->right = new TreeNode(7); 

    return root; 
}

        //         10
        //     5       15
        //  4    7   12    20
TreeNode* makeBinarySearchTree() {
    TreeNode* root = new TreeNode(10); 
    root->left = new TreeNode(5); 
    root->right = new TreeNode(15); 
    root->left->left = new TreeNode(4); 
    root->left->right = new TreeNode(7); 
    root->right->left = new TreeNode(12); 
    root->right->right = new TreeNode(20); 

    return root; 
}



int main() {
    TreeNode* rootBinary = makeBinaryTree(); 
    TreeNode* rootBinarySearch = makeBinarySearchTree(); 

    TreeNode* randomTree = makeTree(1,2,3,4,5,6,7); 

    // printInorder(rootBinary); 
    printInorder(rootBinarySearch); 
    // printPreorder(rootBinarySearch);
    // printTreeBFS(root); 
    // printTreeDFS(root); 
    // printPreorder(root); 
    // printInorder(root); 
    // printPostorder(root); 


}