
vector<int> arrayOfProducts(vector<int> array) {
 vector<int> result(array.size());

  for(int i=0; i<array.size(); i++){
   result[i] = 1;
  }


  int product = 1;
  for(int i=1; i<array.size(); i++){
    product *= array[i-1];
    result[i] = product;
  }

  product = 1;
  for(int i=array.size()-2; i>=0; i--){
    product *= array[i+1];
    result[i] *= product;
  }

  return result;
}