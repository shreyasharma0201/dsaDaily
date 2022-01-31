class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> in;
        if(root == NULL) return in;
        stack<TreeNode*> s;
        while(true){
            if(root != NULL){
                s.push(root);
                root = root->left;
            }else{
                if(s.empty()) break;
                root = s.top();
                s.pop();
                in.push_back(root->val);
                root = root->right;
            }
        }
        return in;
    }
};
