bool generateDocument(string characters, string document) {
  // Write your code here.
    map<char,int> dic;
    for(int i=0; i<characters.size(); i++){
        dic[characters[i]]++;
    }
    for(int i=0; i<document.size(); i++){
        dic[document[i]]--;
        if(dic[document[i]] < 0){
            return false;
        }
    }
    return true;
}
