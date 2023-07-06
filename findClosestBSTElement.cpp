    int findClosestValueInBst(BST *tree, int target) {
      // Write your code here.
        BST *currentNode = tree;
        int ans = currentNode->value;
        while(currentNode != nullptr){
            if(currentNode->value == target){
                ans = currentNode->value;
                break;
            } else {
                int b = 0, c = 0;
                if(currentNode->left != nullptr){
                    b = currentNode->left->value;
                }
                if(currentNode->right != nullptr){
                    c = currentNode->right->value;
                }
                int possibleAns1 = abs(abs(ans) - abs(target));
                int possibleAns2 = abs(abs(b) -  abs(target));
                int possibleAns3 = abs(abs(c) -  abs(target));
                if(possibleAns3 < possibleAns1 && possibleAns3 < possibleAns2){
                    ans = c;
                } else if(possibleAns2 < possibleAns1 && possibleAns2 < possibleAns3) {
                    ans = b;
                } 
                if(currentNode->value > target){
                    currentNode = currentNode->left;
                } else {
                    currentNode = currentNode->right;
                }
            }
        }  
      return ans;
    }