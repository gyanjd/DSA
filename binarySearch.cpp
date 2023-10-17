int findMid(int start,int end){
    int mid = start + (end - start)/2;
    return mid;
}

int binarySearch(vector<int> array, int target) {
  // Write your code here.
    int start = 0;
    int end = array.size()-1;
    int mid;
    while(start <= end){
        mid = findMid(start, end);
        if(array[mid] == target){
            return mid;
        } else {
            if(array[mid] > target){
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
    }
  return -1;
}