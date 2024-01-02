int bestSeat(vector<int> seats) {
  int i=0, j=1;
  int maxSpace = 0, result = -1;

  while(i<seats.size() && j <seats.size()){
    if(seats[j] != 1){
      j++;
    } else {
      if(maxSpace < (j-i-1)){
        maxSpace =  j-i-1;
        result = (j+i)/2;
      }
      i = j;
      j++;
    }
  }
  return result;
}