vector<int> moveElementToEnd(vector<int> array, int toMove) {
  int i=0, j=array.size()-1;

  while(i<j){
    while(array[i] != toMove && i<j){
      i++;
    }
    while(array[j] == toMove && i<j){
      j--;
    }
    swap(array[i], array[j]);
  }  
  return array;
}