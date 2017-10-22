#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

int main(){
  int size, m, n, i, j, k, num, count=0;
  int x=0; int p=0;
  std::cin>>m>>n;
  char matrix1[20][20][20], matrix2[20][20][20], matrix3[20][20][20];
  for(i=0; i<m; i++){
    for(j=0; j<n; j++){
      std::cin>>matrix1[i][j];
    }
    std::cout<<"\n";
  }
  std::cout<<"\n";
  for(i=0; i<m; i++){
    for(j=0; j<n; j++){
      std::cin>>matrix2[i][j];
    }
    std::cout<<"\n";
  }
  std::cout<<"works";

  for(i=0; i<m; i++){
    for(j=0; j<n; j++){
      for(k=0; count<=(strlen(matrix1[i][j])+strlen(matrix1[i][j])); k++){
        num=-1;
        while (p<=strlen(matrix2[i][j])&&x<=strlen(matrix1[i][j])) {
          while(num!=k){
            matrix3[count][i][j]=matrix1[x][i][j];
            x++;
            count++;
            num++;
          }
          num=-1;
          while(num!=k){
            matrix3[count][i][j]=matrix2[p][i][j];
            num++;
            p++;
            count++;
          }
        }
        if(x>p){
          while(x<=strlen(matrix1[i][j])){
            matrix3[count][i][j]=matrix1[x][i][j];
            x++;
            count++;
          }
        }
        else{
          while(p<=strlen(matrix1[i][j])){
            matrix3[count][i][j]=matrix2[p][i][j];
            p++;
            count++;
          }
        }
      }
    }
  }
  for(i=0; i<m; i++){
    for(j=0; j<n; j++){
      std::cout<<matrix3[i][j];
    }
    std::cout<<"\n";
  }
  return 0;
}
