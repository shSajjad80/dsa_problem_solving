#include <bits/stdc++.h>
using namespace std;

int fact(int n){
  // base case

  if(n == 0) return 1;
  // recursive Relation
  int result = n * fact(n-1);
  return result;
}

int main() {

  cout << fact(5) << endl;
  return 0;
  

}