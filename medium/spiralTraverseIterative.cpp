vector<int> spiralTraverse(vector<vector<int>> array) {
  // Write your code here.
  int startRow = 0, startCol = 0, endRow = array.size()-1, endCol = array[0].size()-1;
  vector<int> result;

  while(startRow <= endRow && startCol <= endCol){

    for(int i=startRow; i<=endCol; i++){
      result.push_back(array[startRow][i]);
    }
    
    for(int i=startRow+1; i<=endRow; i++){
      result.push_back(array[i][endCol]);
    }

    for(int i=endCol-1; i>=startCol && startRow != endRow; i--){
      result.push_back(array[endRow][i]);
    }

    for(int i=endRow-1; i>startRow && startCol != endCol; i--){
      result.push_back(array[i][startCol]);
    }

    startRow++;
    startCol++;
    endRow--;
    endCol--;
  }
  return result;
}