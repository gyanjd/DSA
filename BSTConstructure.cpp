#include<bits/stdc++.h>
using namespace std;

class BST {
 public:
    int value;
    BST *left;
    BST *right;

    BST(int val){
      value = val;
      left = nullptr;
      right = nullptr;
    }

    BST &insert(int val){
      BST *newNode = new BST(val);
      BST *currentNode = this;
      while(true){
        if(currentNode->value > val){
          if(currentNode->left == nullptr){
            currentNode->left = newNode;
            break;
          } else {
            currentNode = currentNode->left;
          }
        } else {
          if(currentNode->right == nullptr){
            currentNode->right = newNode;
            break;
          } else {
            currentNode = currentNode->right;
          }
        }
      }
      return *this;
    }

    bool contains(int val) {
      BST *currentNode = this;
      bool result = false;
      while(currentNode != nullptr){
        if(currentNode->value == val){
          result = true;
          break;
        } else {
          if(currentNode->value > val){
            currentNode = currentNode->left;
          } else {
            currentNode = currentNode->right;
          }
        }
      }
      return result;
    }

    // imp ******
    BST &remove(int val){
      BST* currentNode = this;
      BST* prevCandidate = nullptr;
      if(currentNode == nullptr) return *this;
      if(prevCandidate != nullptr)
      while(currentNode != nullptr){
        if(currentNode->value == val){
            //leaf node
          if(currentNode->left != nullptr && currentNode->right != nullptr){
            BST *replaceCandidate = currentNode->right; // smallest value for right->left path
            BST *replaceCandidateParent = currentNode;
            while(replaceCandidate->left != nullptr){
              replaceCandidateParent = replaceCandidate;
              replaceCandidate = replaceCandidate->left;
            }
            int replaceValue = replaceCandidate->value;
            currentNode->right->remove(replaceValue);
            currentNode->value = replaceValue;
            if(replaceCandidateParent->right == replaceCandidate){
              currentNode->right = nullptr;
            } 
          } else if(currentNode->left == nullptr && currentNode->right != nullptr){
            if(prevCandidate == nullptr){
              BST *rightNode = currentNode->right;
              currentNode->value = rightNode->value;
              currentNode->left = rightNode->left;
              currentNode->right = rightNode->right;
              delete rightNode;
            } else {
              if(prevCandidate->left == currentNode){
                prevCandidate->left = currentNode->right;
              } else {
                prevCandidate->right = currentNode->right;
              }
              delete currentNode;
            }
          } else if(currentNode->left != nullptr && currentNode->right == nullptr){
            if(prevCandidate == nullptr){
              BST *leftNode = currentNode->left;
              currentNode->value = leftNode->value;
              currentNode->left = leftNode->left;
              currentNode->right = leftNode->right;
              delete leftNode;
            } else {
              if(prevCandidate->left == currentNode){
                prevCandidate->left = currentNode->left;
              } else {
                prevCandidate->right = currentNode->left;
              }
              delete currentNode;
            }
          } else {
            if(prevCandidate == nullptr){ // if root node
              currentNode = nullptr;
            } else { // other than root node
              if(prevCandidate->left == currentNode){
                prevCandidate->left = nullptr;
              } else {
                prevCandidate->right = nullptr;
              }
              delete currentNode;
            }
          }
          break;
        } else {            
          prevCandidate = currentNode;
          if(currentNode->value > val){
            currentNode = currentNode->left;
          } else {
            currentNode = currentNode->right;
          }
        }
      }
      return *this;
    }
};

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    BST *node = new BST(10);
    //insert function call
    node->insert(5);
    node->insert(15);
    node->insert(2);
    node->insert(5);
    node->insert(13);
    node->insert(22);
    node->insert(1);
    node->insert(14);
    node->insert(12);

    //search in BST
    cout << node->contains(23) << "\n";
    cout << node->contains(2) << "\n";
    cout << node->contains(10) << "\n";
    cout << node->contains(1) << "\n";

    //delete in BST
    node->remove(10);
    node->remove(5);
    return 0;
}