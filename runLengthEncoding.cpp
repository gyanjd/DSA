void solve(){
    string str;
    cin >> str;
    
    string ans = "";
    int count = 1;
    char curCharacter = str[0];
    for(int i=1; i<str.size(); i++){
        if(str[i] != str[i-1] || count >= 9){
            ans += to_string(count) + curCharacter;
            count = 1;
            curCharacter = str[i];
        } else {
            count++;
        }        
    }
    ans += to_string(count) + curCharacter;
    cout << ans;
}