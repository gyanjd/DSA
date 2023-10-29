vector<string> commonCharacters(vector<string> strings) {
  int smallestStringIndex = 0;
  for(int i=1; i<strings.size(); i++){
    if(strings[i] < strings[i-1]){
      smallestStringIndex = i;
    }
  }
  set<char> potentialChar;
  for(int i=0; i<strings[smallestStringIndex].size(); i++){
    potentialChar.insert(strings[smallestStringIndex][i]);
  }

  set<char> uniqueChar;
  set<char> uc;
  for(int i=0; i<strings.size(); i++){
    for(int j=0; j<strings[i].size(); j++){
      uniqueChar.insert(strings[i][j]);
    }
    for(auto it : potentialChar){
      if(uniqueChar.count(it)){
        uc.insert(it);
      }
    }
    potentialChar.clear();
    potentialChar = uc;
    uc.clear();
    uniqueChar.clear();
  }

  vector<string> ans;
  for(auto it : potentialChar){
    // cout << it << " ";
    ans.push_back(string(1,it));
  }
  return ans;
}