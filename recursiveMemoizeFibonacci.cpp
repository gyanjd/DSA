// recursive solution 
// time - 2^n space - O(n)

int getNthFib(int n) {
  if(n==1) return 0;
  else if(n==2) return 1;
  else return getNthFib(n-1)+getNthFib(n-2);
}

___________________________________________________________________



// recursive memoize solution 
// time - O(n) space - O(n)

#include<unordered_map>

unordered_map<int,int> um = {{1,0},{2,1}};
int getNthFib(int n) {
  if(um.count(n)) return um[n];
  else {
    um[n] = getNthFib(n-1) + getNthFib(n-2);
    return um[n];
  }
}