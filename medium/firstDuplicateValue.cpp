int firstDuplicateValue(vector<int> array) { 
  for(int i=0; i<array.size(); i++){
    if(array[abs(array[i])-1] < 0){
      return abs(array[i]);
    } else {
      array[abs(array[i])-1] *= -1;
    }
  }
  return -1; 
}