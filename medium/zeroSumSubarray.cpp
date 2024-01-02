bool zeroSumSubarray(vector<int> nums) {
  set<int> look{0};
  int curSum = 0;
  for(int i=0; i<nums.size(); i++){
    curSum += nums[i];
    if(look.count(curSum)) return true;
    look.insert(curSum);
  }
  return false;
}