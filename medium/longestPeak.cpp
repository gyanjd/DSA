
int longestPeak(vector<int> array) {
  int result = 0;
  if(array.size() < 3) return result;
  for(int i=1; i<array.size()-1;i++){
    if(array[i] > array[i-1] && array[i] > array[i+1]){
      int left = i, right = i, count = 1;
      while(left>0){
        if(array[left-1] < array[left]){
          count++;
          left--;
        } else {
          break;
        }
      }
      while(right < array.size()-1){
        if(array[right+1] < array[right]){
          count++;
          right++;
        } else {
          break;
        }
      }
      result = max(result, count);
      i = right-1;
    }
  }
  return result;
}