#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        string nodeName;
        vector<Node*> children;

    Node(string str) { 
        nodeName = str; 
    }

    Node* addChild(string nodeName){
        Node* child = new Node(nodeName);
        children.push_back(child);
        return this;
    }

    vector<string> depthFirstSearch(vector<string>* array){
        array->push_back(this->nodeName);
        for(Node* child : this->children){
            child->depthFirstSearch(array);
        }
        return *array;
    }
};

int main (){
    Node *node = new Node("A");
    node->addChild("B");
    node->addChild("C");
    node->addChild("D");
    node->addChild("E");
    node->addChild("F");
    node->addChild("G");
    node->addChild("H");
    node->addChild("I");
    node->addChild("J");

    // int ans = nodeDepths(node, 0);
    vector<string> ans;
    node->depthFirstSearch(&ans);
    for(string name : ans){
        cout << name << " : ";
    }
    return 0;
}