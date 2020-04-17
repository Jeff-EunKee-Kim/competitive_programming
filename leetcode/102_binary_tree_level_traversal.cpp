using namespace std;
#include <vector>;
#include <queue>;

class Solution {
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> traversed ;
        if (root == NULL) return traversed; 
        
        queue<TreeNode*> pq; 
        pq.push(root);
        
        while(pq.size() != 0) {
            vector<int> level ;
            int size = pq.size(); 
            
            for (int i = 0; i < size; i++) {
                TreeNode* curr = pq.front(); 
                pq.pop(); 
                level.push_back(curr->val); 
                if(curr->left != NULL) {
                    pq.push(curr->left); 
                }
                if(curr->right != NULL) {
                    pq.push(curr->right); 
                }
            }
            traversed.push_back(level); 
        }
    return traversed; 
    }
};