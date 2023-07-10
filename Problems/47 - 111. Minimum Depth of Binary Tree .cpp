// Author: Abdelrahman Helmy

class Solution{ 
public:
    int minDepth(TreeNode* root) {
        if(root == nullptr) return 0;
        if(root->left==nullptr && root->right==nullptr) // leaf
            return 1;
        int leftdep = root->left!=nullptr ? minDepth(root->left):INT_MAX;
        int rightdep = root->right!=nullptr ? minDepth(root->right):INT_MAX;

        return 1+min(rightdep,leftdep);
    }
};
