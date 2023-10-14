int productSum(vector<any> array, int m = 1) {
  int sum = 0;
  for(any element : array){
    if(element.type() == typeid(vector<any>)){
        sum += productSum(any_cast<vector<any>>(element), m + 1);
    } else {
        sum += any_cast<int>(element);
    }
  }
  return sum * m;
}