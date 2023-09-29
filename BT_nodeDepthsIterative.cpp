int nodeDepths(BT* root){
    int sumOfDepths = 0;
    stack<pair<BT*, int>> stk;
    stk.push(make_pair(root,0));
    while(stk.size() > 0){
        pair<BT*, int> nodeInfo = stk.top();
        stk.pop();
        if(nodeInfo.first == nullptr)
            continue;
        sumOfDepths += nodeInfo.second;
        stk.push(make_pair(nodeInfo.first->left, nodeInfo.second+1));
        stk.push(make_pair(nodeInfo.first->right, nodeInfo.second+1));
    }
    return sumOfDepths;
}