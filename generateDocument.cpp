bool generateDocument(string characters, string document) {
  // Write your code here.
    map<char,int> dic;
    map<char, int> sen;
    for(int i=0; i<document.size(); i++){
        dic[document[i]]++;
    }
    for(int i=0; i<characters.size(); i++){
        sen[characters[i]]++;
    }
    for(auto i : dic){
        if(sen.count(i.first) && sen[i.first] >= i.second){

        } else {
            return false;
        }
    }
    return true;
}