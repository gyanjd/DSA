int nodeDepths(BT* root, int depth) {
  // Write your code here.
    if(root == nullptr){
        return 0;
    }
    return depth + nodeDepths(root->left, depth + 1) + nodeDepths(root->right, depth + 1);
}