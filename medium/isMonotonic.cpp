bool isMonotonic(vector<int> array) {
  bool isNonDecs = true;
  bool isNonAscs = true;

  for(int i=1; i<array.size(); i++){
    if(array[i] > array[i-1]){
      isNonDecs = false;
    } else if(array[i] < array[i-1]){
      isNonAscs = false;
    }
  }
  return isNonAscs || isNonDecs;
}
