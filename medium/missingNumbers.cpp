vector<int> missingNumbers(vector<int> nums) {
  vector<int> result;

  int length = nums.size()+2;
  int arraySum = 0, totalSum = length*(length+1)/2;
  for(int i=0; i<nums.size(); i++){
    arraySum += nums[i];
  }
  int mid = (totalSum - arraySum)/2;
  
  int leftSide = 0, rightSide = 0;
  for(int i=0; i<nums.size(); i++){
    if(nums[i] <= mid) leftSide += nums[i];
    else rightSide += nums[i];
  }
  result.push_back((mid * (mid+1)/2) - leftSide);
  result.push_back((totalSum -  (mid * (mid+1)/2)) - rightSide);

  return result;
}
