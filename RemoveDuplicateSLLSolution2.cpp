LinkedList* removeDuplicatesFromLinkedList(LinkedList* linkedList) {
  // Write your code here.
  LinkedList *curNode = linkedList;
  LinkedList *nextNode = nullptr;
  while(curNode != nullptr && curNode->next != nullptr){
    nextNode = curNode->next;
    while(nextNode != nullptr && nextNode->value == curNode->value){
      nextNode = nextNode->next;
    }
    curNode->next = nextNode;
    curNode = nextNode;
  }
  return linkedList;
}
