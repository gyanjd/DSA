vector<string> commonCharacters(vector<string> strings) {
  int smallestStringIndex = 0;
  for(int i=1; i<strings.size(); i++){
    if(strings[i] < strings[i-1]){
      smallestStringIndex = i;
    }
  }
  set<char> potentialChar(strings[smallestStringIndex].begin(), strings[smallestStringIndex].end());

  set<char> uc;
  for(int i=0; i<strings.size(); i++){
    set<char> uniqueChar(strings[i].begin(), strings[i].end());
    for(auto it : potentialChar){
      if(uniqueChar.count(it)){
        uc.insert(it);
      }
    }
    potentialChar.clear();
    potentialChar = uc;
    uc.clear();
  }

  vector<string> ans;
  for(auto it : potentialChar){
    ans.push_back(string(1,it));
  }
  return ans;
}