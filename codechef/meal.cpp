#include<cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int n, a, b, c, sum=0;
  std::cin>>n>>a>>b>>c;
  if(n!=1){
    sum+=std::min(a,b)+(n-2)*std::min({a,b,c});
  }
  std::cout<<sum;
  return 0;
}
