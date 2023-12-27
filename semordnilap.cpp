vector<vector<string>> semordnilap(vector<string> words) {
  set<string> unique;
  vector<vector<string>> result;
  vector<string> res;
  for(int i=0; i<words.size(); i++){
    unique.insert(words[i]);
  }

  for(int i=0; i<words.size(); i++){
    unique.erase(words[i]);
    string newStr = "";
    for(int j=words[i].size()-1; j>=0; j--){
        newStr += words[i][j];
    }
    if(unique.count(newStr)){
        res.push_back(words[i]);
        res.push_back(newStr);
        result.push_back(res);
        unique.erase(newStr);
    }
    res.clear();
  }
  return result;
}