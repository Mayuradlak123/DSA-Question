// Leetcode : https://leetcode.com/problems/kth-smallest-element-in-a-bst/
void solve (vector<int>& ans,TreeNode* root){
        if(root==nullptr) return;
     ans.push_back(root->val);
     solve(ans,root->left);
     solve(ans,root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> ans;
        priority_queue<int> pq;
        int i;
        solve(ans,root);
        for (i=0; i<ans.size(); i++){
            pq.push(ans[i]);
          if(pq.size()>k){ pq.pop();}
        }
        return pq.top();
    }