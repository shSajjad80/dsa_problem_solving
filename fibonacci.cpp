#include <bits/stdc++.h>
using namespace std;

int fib(int n){
  // base case
  if(n==0) return 0;
  if(n==1) return 1;

  // function body
  int result = fib(n-1) +fib(n-2) ;
  return result;
}


int main() {

  cout << fib(4) << endl;

  
}