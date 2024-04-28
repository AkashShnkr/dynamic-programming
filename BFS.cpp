#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> levelwisetrversal(TreeNode* root){
    vector<vector<int>> ans;
    if(root==NULL){
     return 0;
    }
    queue<TreeNode*> q;
    int an=q.size();
    q.push(root);
    while(!q.empty()){
        int size=q.size();
        vector<int> level;
        for(int i=0;i<size;i++){
            TreeNode* node =q.front();
            q.pop();
            if(node->left!=NULL) q.push(node->left);
            if(node->right!=NULL) q.push(node->right)
             level.push_back(node->val);

        }
        ans.push_back(level);
    }
    return ans;

}
int main()  {
    levelwisetrversal(root);
return 0;
}