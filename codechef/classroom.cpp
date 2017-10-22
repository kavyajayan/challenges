#include<cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef std::vector<ll> vl;

ll digitSum(ll x)
{
	ll temp=0;
	while(x>0)
	{
		temp=temp+x%10;
		x=x/10;
	}
	return temp;
}

ll digit(ll x){
  ll count1;
  while(x>0){
    x=x/10;
    count1++;
  }
  return count1;
}

int main(){
  ll n, sum=0;
  vl v;
  ll count;
  std::cin>>n;
  count=0;
  for(int i= std::max(n-9*digit(n),0LL); i<n; i++){
    if(digitSum(i)+i==n){
      v.push_back(i);
      count++;
    }
  }
  std::cout<<count<<"\n";
  for(int i=0; i<v.size(); i++){
    std::cout<<v[i]<<"\n";
  }
  return 0;
}
