bool cmp(unordered_map<string, int> &a, unordered_map<string, int> &b){
    if(a.begin()->second > b.begin()->second) return true;
    return false;
}

int optimalFreelancing(vector<unordered_map<string, int>> jobs) {
  // Write your code here.
    bool space[8];
    int count = 0, payment = 0;
    for(int i=0; i<8; i++){
       space[i] = 1;
    }
  
    sort(jobs.begin(), jobs.end(), cmp);

    for(int i=0; i<jobs.size(); i++){
      for(auto j: jobs[i]){
        if(j.first == "deadline"){
          int k;
          if(j.second > 7){
            k = 7;
          } else {
            k = j.second;
          }
          for(; k>0; k--){
            if(space[k] == true) {
              space[k] = false;
              count += payment;
              break;
            } 
          }
        } else {
          payment = j.second;
        }
      } 
    }
  return count;
} 