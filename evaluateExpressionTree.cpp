int evaluteExpression(BT* root){
   if(root->value >= 0)
        return root->value;
    int leftValue = evaluteExpression(root->left);
    int rightValue = evaluteExpression(root->right);

    if(root->value == -1){
        return leftValue + rightValue;
    } else if(root->value == -2){
        return leftValue - rightValue;
    } else if(root->value == -3){
        return leftValue / rightValue;
    } else {
        return leftValue * rightValue;
    }
}