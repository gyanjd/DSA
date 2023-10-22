void solve(){
    string str, newStr;
    cin >> str;
    int key;
    cin >> key;

    key %= 26;
    for(int i=0; i<str.size(); i++){
       int asci = str[i] + key;
       if(asci > 122){
            asci %= 122;
            asci += 96;
       }
       char c = asci;
       newStr += c;
    }
   cout << newStr;
}