LinkedList* middleNode(LinkedList* linkedList) {
  // Write your code here.
  LinkedList *fasterNode = linkedList;
  LinkedList *slowNode = linkedList;

  while(fasterNode != nullptr && fasterNode->next != nullptr){
    slowNode = slowNode->next;
    fasterNode = fasterNode->next->next;
  }
  
  return slowNode;
}