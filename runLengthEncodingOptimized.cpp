// time - O(n), space O(n)

void solve(){
    string str;
    cin >> str;
    
    vector<char> ans;
    vi length;

    int count = 1;
    char curCharacter = str[0];
    for(int i=1; i<str.size(); i++){
        if(str[i] != str[i-1] || count >= 9){
            length.push_back(count);
            ans.push_back(curCharacter);
            count = 1;
            curCharacter = str[i];
        } else {
            count++;
        }        
    }
    length.push_back(count);
    ans.push_back(curCharacter);

    for(int i=0; i<length.size(); i++)
        cout << length[i] << ans[i];
}