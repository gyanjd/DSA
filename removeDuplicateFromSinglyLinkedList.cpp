#include<bits/stdc++.h>
using namespace std;

class LinkedList {
    public:
        int value;
        LinkedList* next = nullptr;

    LinkedList(int value) {
        this->value = value;
    } 
};

LinkedList* removeDuplicatesFromLinkedList(LinkedList* linkedList) {
    LinkedList *head = linkedList;
    LinkedList *curNode = linkedList;
    LinkedList *nextNode = linkedList->next;

    while(curNode->next != nullptr){
        if(curNode->value == nextNode->value){
            LinkedList *del = curNode->next;
            curNode->next = nextNode->next;
            delete del;
        } else {
            curNode = curNode->next;
        }
        nextNode = curNode->next;
    }
    return head;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    LinkedList *node = new LinkedList(10);
    LinkedList *newNode = new LinkedList(10);
    node->next = newNode;

    cout << node->value << " ";
    cout << node->next->value << "\n";

    LinkedList *newList = removeDuplicatesFromLinkedList(node);

    cout << newList->value << " ";
    // cout << node->next->value;

    return 0;
}