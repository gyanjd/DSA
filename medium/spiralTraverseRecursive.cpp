void spiral(vector<vector<int>> array, int startRow, int startCol, int endRow, int endCol,vector<int> &result){

    if(startRow > endRow || startCol > endCol) return;
  
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
    spiral(array, startRow + 1, startCol + 1, endRow - 1, endCol - 1, result);
}


vector<int> spiralTraverse(vector<vector<int>> array) {
  // Write your code here.
  int startRow = 0, startCol = 0, endRow = array.size()-1, endCol = array[0].size()-1;
  vector<int> result;
  spiral(array, startRow, startCol, endRow, endCol, result);
  return result;
}