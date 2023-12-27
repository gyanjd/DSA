bool checkMin(int a, int b){
  if(a > b){
    return true;
  }
  return false;
}


vector<int> smallestDifference(vector<int> arrayOne, vector<int> arrayTwo) {
  vector<int> result;

  sort(arrayOne.begin(), arrayOne.end());
  sort(arrayTwo.begin(), arrayTwo.end());

  int i=0, j=0, smallestDiff = INT_MAX;

  while(i<arrayOne.size() && j<arrayTwo.size()){
    
    if(arrayOne[i] == arrayTwo[j]){
      result.clear();
      result.push_back(arrayOne[i]);
      result.push_back(arrayTwo[j]);
      break;
    } else if(arrayOne[i] < arrayTwo[j]){
      if(checkMin(smallestDiff, abs(arrayOne[i]-arrayTwo[j]))){
        smallestDiff = abs(arrayOne[i]-arrayTwo[j]);
        result.clear();
        result.push_back(arrayOne[i]);
        result.push_back(arrayTwo[j]);
      }
      i++;
    } else {
      if(checkMin(smallestDiff, abs(arrayOne[i]-arrayTwo[j]))){
        smallestDiff =  abs(arrayOne[i]-arrayTwo[j]);
        result.clear();
        result.push_back(arrayOne[i]);
        result.push_back(arrayTwo[j]);
      }
      j++;
    }
  }
  return result;
}