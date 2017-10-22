#include<stdio.h>
#include<iostream>
#include<cstring>
#include<string>
using namespace std;

string LongestWord(string sen){
  std::string str;
  int count=0;
  int prev=1;
  int len=0;
  for(int i=0; i<str.size(); i++){
    if(isalpha(str[i])){
      count++;
    }
    if(str[i]==' '){
      if(count>len){
        len=count;
        sen=str.substr(prev,count);
      }
      count=0;
      prev=i+1;
    }
  }
  if(count>len){
    len=count;
    sen=str.substr(prev,count);
  }
    return str;
}

int main(){
  std::string sen;
  getline(cin,sen);
  std::cout<<'"'<<LongestWord(sen)<<'"';
  return 0;
}
