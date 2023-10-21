void insertionSort(vi &v){
    for(int i=1; i<v.size(); i++){
        for(int j=i; j>0; j--){
            if(v[j] < v[j-1]){
                swap(v[j], v[j-1]);
            } else {
                break;
            }
        }
    }
}