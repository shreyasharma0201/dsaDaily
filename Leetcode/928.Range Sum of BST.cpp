/* Approach 1 
  * dfs traversal in b-tree or postorder traversal to each node
  * if node's value in range of [low, high] inclusively then add it to sum
*/

class Solution {
public:
    
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = 0;
        
        sum = dfs(root, low, high, sum);
        return sum;
    }
    
    int dfs(TreeNode* node, int low, int high, int sum){
        
        if(node->left != NULL){
            sum = dfs(node->left, low, high, sum);
        }
        
        if(node->right != NULL){
            sum = dfs(node->right, low, high, sum);
        }
        
        if(node->val >= low && node->val <= high){
            sum += node->val;
        }
        
        return sum;
        
    }
};

<------------------------------------------------------------------------------------------------------------------------->
/* Approach 2 
   * this is also recursive but prevents the visiting all nodes.
   * we will take benefit of binary search tree.
   * like we do in binary search, if node.val < low then we call to their right.
   * and if node.val > high then we call to their left.
   * and if low <= node.val <= high, add node.val and do recursive to both left and right side.
*/

int rangeSumBST(TreeNode root, int L, int R) {
        if (root == NULL) return 0; // base case.
        if (root->val < L) return rangeSumBST(root->right, L, R); // left branch excluded.
        if (root->val > R) return rangeSumBST(root->left, L, R); // right branch excluded.
        return root->val + rangeSumBST(root->right, L, R) + rangeSumBST(root->left, L, R); // count in both children.
    }
<------------------------------------------------------------------------------------------------------------------------->
/* Approach 3 
   * this is an iterative approach.
   * this approach works as follows 
     * remove
     * work (check if val is valid then add up)
     * add child
*/

class Solution {
public:
    
    int rangeSumBST(TreeNode* root, int L, int R) {
        stack<TreeNode* > s;
        int sum = 0;
        s.push(root);
        
        while(!s.empty()){
            
            TreeNode* node = s.top();
            s.pop();
            
            if(node == NULL){
                 continue;
            }
            
            if(node->val > L){
                s.push(node->left);
            }
            if(node->val < R){
                s.push(node->right);
            }
            if(node->val >= L && node->val <= R){
                sum += node->val;
            }
        }
        return sum;
    }
};
