vector<int> calculateBranchSum(BST *node,int currentSum,vector<int> &ans){
    if(node == nullptr){
        return ans;
    }
    currentSum = currentSum + node->value;
    if(node->left == nullptr && node->right == nullptr){
        ans.push_back(currentSum);           
        return ans; 
    }
    if(node->left != nullptr)
        calculateBranchSum(node->left, currentSum, ans);
    if(node->right != nullptr)
        calculateBranchSum(node->right, currentSum, ans);
    return ans;
}

vector<int> branchSums(BST *root){
    vector<int> ans;
    calculateBranchSum(root, 0, ans);
    return ans;
}


