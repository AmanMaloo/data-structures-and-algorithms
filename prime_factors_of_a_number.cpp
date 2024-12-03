#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int>ans;
  for(int i = 2 ; i <= sqrt(n) ; i++){
    if(n % i == 0){
      ans.push_back(i);
      while(n%i==0) n/=i;
    }
  }
  if(n!=1) ans.push_back(n);
  //  ans stores prime factors of the number n
  // worst time complexity of code will be big oh root n(when n itself is a prime)
  return 0;
}
