void bubbleSort(vi &v){
    int isSwap = false;
    for(int i=0; i<v.size(); i++){
        isSwap = false;
        for(int j=0; j<v.size()-1-i; j++){
            if(v[j] > v[j+1]){
                swap(v[j], v[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap) break;
    }
}