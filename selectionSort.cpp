void selectionSort(vi &v){
    int smallerIdx;
    for(int i=0; i<v.size()-1; i++){
        smallerIdx = i;
        for(int j=i; j<v.size(); j++){
            if(v[smallerIdx] > v[j]){
                smallerIdx = j;
            }
        }
        swap(v[smallerIdx], v[i]);
    }
}