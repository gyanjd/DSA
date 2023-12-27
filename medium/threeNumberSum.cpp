
vector<vector<int>> threeNumberSum(vector<int> array, int targetSum) {
  vector<vector<int>> result;
  sort(array.begin(), array.end());
  vector<int> triplet;

  for(int i=0; i<array.size()-2; i++){
    int j=i+1;
    int k=array.size()-1;
    while(j<k){
      if(array[i] + array[j] + array[k] == targetSum){
        vector<int> triplet{array[i], array[j], array[k]};
        result.push_back(triplet);
        triplet.clear();
        j++;
        k--;
      } else if(array[i] + array[j] + array[k] < targetSum){
        j++;
      } else {
        k--;
      }
    }
  }
  return result;
}