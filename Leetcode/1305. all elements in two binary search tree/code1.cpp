class Solution {
public:
    
    void dfs(TreeNode* t, vector<int>& l){
        if(t == NULL) return;
        if(t->left != NULL)
            return dfs(t, l);
        if(t->right != NULL)
            return dfs(t, l);
        l.push_back(t->val);
    }
    
    void merge(vector<int> l1, vector<int> l2, vector<int>& l3){
        int p1 = 0, p2 = 0, n1 = l1.size(), n2 = l1.size(); 
        while(p1 < n1 && p2 < n2){
            if(l1[p1] < l2[p2]){
                l3.push_back(l1[p1]);
                p1++;
            }
            else if(l1[p1] > l2[p2]){
                l3.push_back(l2[p2]);
                p2++;
            }else{
                l3.push_back(l1[p1]);
                l3.push_back(l2[p2]);
                p1++;
                p2++;
            }
        }
        while(p1 < n1){
            l3.push_back(l1[p1]);
        }
        while(p2 < n2){
            l3.push_back(l2[p2]);
        }
    }
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> l1, l2, l3;
        dfs(root1, l1);
        dfs(root2, l2);
        merge(l1, l2, l3);
        return l3;
    }
};
