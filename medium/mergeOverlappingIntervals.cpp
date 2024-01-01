bool cmp(vector<int> a, vector<int> b){
  if(a[0] <= b[0]) return true;
  return false;
}

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> intervals) {
  vector<vector<int>> result;
  sort(intervals.begin(), intervals.end(), cmp);

  vector<int> newArray;
  for(int i=0; i<intervals.size(); i++){
    if(i == 0) {
      newArray = intervals[i];
    } else {
      if(newArray[1] >= intervals[i][0]){
        newArray[1] = max(newArray[1], intervals[i][1]);
      } else {
        result.push_back(newArray);
        newArray.clear();
        newArray = intervals[i];
      }
    }
  }
  result.push_back(newArray);
  return result;
}